import rclpy,json,math
from rclpy.node import Node
import pypot.robot

from lapin_msgs.msg import CmdBip

class DriverServo(Node):

    def __init__(self):
        super().__init__('lapin_servo')
        self.cmdSubscription = self.create_subscription(CmdBip, 'cmd_bip',self.listen_callback, 10)
        timer_period = 0.04  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.R = pypot.robot.from_json('/home/ubuntu/lapin_ws/src/lapin_driver/pypot_config/confLapinMarkII.json')

    def timer_callback(self):
        pass

    def listen_callback(self,msg):
        KP = 10
        KI = 5
        (aFr,lFr) = self.direct_kinematics((70-self.R.r_knee_y.present_position)*math.pi/180.0)
        (aFl,lFl) = self.direct_kinematics((70-self.R.l_knee_y.present_position)*math.pi/180.0)
        
        self.R.r_hip_x.pid = (KP,KI,0)
        self.R.r_hip_x.compliant = msg.compliant
        self.R.r_hip_x.goal_position = msg.frontal_bissecting_angle/2
        self.R.r_hip_x.moving_speed = msg.speed
        
        self.R.l_hip_x.pid = (KP,KI,0)
        self.R.l_hip_x.compliant = msg.compliant
        self.R.l_hip_x.goal_position = msg.frontal_bissecting_angle/2
        self.R.l_hip_x.moving_speed = msg.speed
        
        self.R.r_hip_y.compliant = msg.compliant
        self.R.r_hip_y.goal_position = -lFr-msg.sagittal_bissecting_angle/2
        self.R.r_hip_y.moving_speed = msg.speed
        
        self.R.l_hip_y.compliant = msg.compliant
        self.R.l_hip_y.goal_position = -lFl+msg.sagittal_bissecting_angle/2
        self.R.l_hip_y.moving_speed = msg.speed
        
        self.R.r_knee_y.pid = (KP,KI,0)
        self.R.r_knee_y.compliant = msg.compliant
        self.R.r_knee_y.goal_position = interp(msg.right_leg_extension_ratio, -40, 30)
        self.R.r_knee_y.moving_speed = msg.speed
        
        self.R.l_knee_y.pid = (KP,KI,0)
        self.R.l_knee_y.compliant = msg.compliant
        self.R.l_knee_y.goal_position = interp(msg.left_leg_extension_ratio, -40, 30)
        self.R.l_knee_y.moving_speed = msg.speed
        
        self.R.r_ankle_y.pid = (KP,0,0)
        self.R.r_ankle_y.compliant = msg.compliant or msg.right_ankle_compliant
        self.R.r_ankle_y.goal_position = aFr-lFr-msg.right_ankle_angle
        self.R.r_ankle_y.moving_speed = msg.speed
        
        self.R.l_ankle_y.pid = (KP,0,0)
        self.R.l_ankle_y.compliant = msg.compliant or msg.left_ankle_compliant
        self.R.l_ankle_y.goal_position = aFl-lFl-msg.left_ankle_angle
        self.R.l_ankle_y.moving_speed = msg.speed

    def direct_kinematics(self,theta2):
        c = math.cos(theta2)
        s = math.sin(theta2)
        xA = 0.025
        yA = 0.045
        xB = 0.095
        yB = 0.000
        L2 = 0.130
        L3 = 0.055
        L4 = 0.122
        L5 = 0.140
        xC = xB+L2*c
        yC = yB+L2*s
        AC = math.sqrt((xA-xC)**2+(yA-yC)**2)
        AH = min((L4**2-L3**2+AC**2)/(2*AC),L4)
        HD = math.sqrt(L4**2-AH**2)
        xH = xA+AH*(xC-xA)/AC
        yH = yA+AH*(yC-yA)/AC
        xD = xH-HD*(yC-yA)/AC
        yD = yH+HD*(xC-xA)/AC
        xF = xC+L5*(xC-xD)/L3
        yF = yC+L5*(yC-yD)/L3

        return math.atan((yF-yC)/(xF-xC))*180.0/math.pi, math.atan(yF/xF)*180.0/math.pi


def main(args=None):
    rclpy.init(args=args)

    servos = DriverServo()

    rclpy.spin(servos)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    servos.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()