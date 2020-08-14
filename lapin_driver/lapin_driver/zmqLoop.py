import rclpy,json,zmq
from rclpy.node import Node

from lapin_msgs.msg import Feet

class DriverZmq(Node):

    def __init__(self):
        super().__init__('lapin_zmq')
        self.feetSubscription = self.create_subscription(Feet, 'feet',self.listen_callback, 10)
        ctx = zmq.Context()
        self.msgpub = ctx.socket(zmq.PUB)
        self.msgpub.bind('tcp://*:3000')


    def listen_callback(self,msg):
        breakpoint()
        a = {'rf':msg.right_front_force,
        'rb':msg.right_back_force,
        'lf':msg.left_front_force,
        'lb':msg.left_back_force}
        self.msgpub.send_string(json.dumps(a))

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