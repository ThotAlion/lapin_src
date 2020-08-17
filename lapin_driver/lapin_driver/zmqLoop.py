import rclpy,json,zmq
from rclpy.node import Node

from lapin_msgs.msg import Feet
from geometry_msgs.msg import Vector3Stamped

class DriverZmq(Node):

    def __init__(self):
        super().__init__('lapin_zmq')
        self.feetSubscription = self.create_subscription(Feet, 'feet',self.listen_feet_callback, 1)
        self.poseSubscription = self.create_subscription(Vector3Stamped, 'pose',self.listen_pose_callback, 1)
        self.twistSubscription = self.create_subscription(Vector3Stamped, 'twist',self.listen_twist_callback, 1)
        self.timer = self.create_timer(0.04, self.timer_callback)
        ctx = zmq.Context()
        self.msgpub = ctx.socket(zmq.PUB)
        self.msgpub.bind('tcp://*:3000')
        self.tree = {}

    def timer_callback(self):
        self.msgpub.send_string(json.dumps(self.tree))

    def listen_feet_callback(self,msg):
        self.tree['rf']= msg.right_front_force
        self.tree['rb']= msg.right_back_force
        self.tree['lf']= msg.left_front_force
        self.tree['lb']= msg.left_back_force
    
    def listen_pose_callback(self,msg):
        self.tree['roll']= msg.vector.x
    
    def listen_twist_callback(self,msg):
        self.tree['rollrate']= msg.vector.x

def main(args=None):
    rclpy.init(args=args)

    zmqServ = DriverZmq()

    rclpy.spin(zmqServ)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    zmqServ.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()