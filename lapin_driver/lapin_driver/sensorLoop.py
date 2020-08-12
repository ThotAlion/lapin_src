import rclpy,json
from rclpy.node import Node
from serial import Serial

from lapin_msgs.msg import Feet
from geometry_msgs.msg import Vector3Stamped

# petit changement

class Driver(Node):

    def __init__(self):
        super().__init__('lapin_driver')
        self.feetPublisher = self.create_publisher(Feet, 'feet', 10)
        self.posePublisher = self.create_publisher(Vector3Stamped, 'pose', 10)
        self.twistPublisher = self.create_publisher(Vector3Stamped, 'twist', 10)
        timer_period = 0.04  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.PS = Serial('/dev/ttyS0',115200,timeout=0.1)

    def timer_callback(self):
        now_msg = self.get_clock().now().to_msg()
        info = {}
        self.PS.write(b"A")
        out = self.PS.readline()
        try:
            info = json.loads(out)
        except:
            pass
        
        if len(info)>0:
            msg = Feet()
            msg.header.stamp = now_msg
            msg.right_front_force = info["RF"]["F"]
            msg.right_front_valid = info["RF"]["S"]==1
            msg.right_back_force = info["RB"]["F"]
            msg.right_back_valid = info["RB"]["S"]==1
            msg.left_front_force = info["LF"]["F"]
            msg.left_front_valid = info["LF"]["S"]==1
            msg.left_back_force = info["LB"]["F"]
            msg.left_back_valid = info["LB"]["S"]==1
            self.feetPublisher.publish(msg)
            msg = Vector3Stamped()
            msg.header.stamp = now_msg
            msg.vector.x=info["ANG"]["X"]
            msg.vector.y=info["ANG"]["Y"]
            msg.vector.z=info["ANG"]["Z"]
            self.posePublisher.publish(msg)
            msg = Vector3Stamped()
            msg.header.stamp = now_msg
            msg.vector.x=info["GYR"]["X"]
            msg.vector.y=info["GYR"]["Y"]
            msg.vector.z=info["GYR"]["Z"]
            self.twistPublisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    sensors = Driver()

    rclpy.spin(sensors)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sensors.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()