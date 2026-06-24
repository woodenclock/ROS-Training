import rclpy
from rclpy.node import Node
#------------------------------------------------
#                    TODO:
#  Import your SimpleVelocity here
#------------------------------------------------
from geometry_msgs.msg import Twist


class SimpleVelPublisherNode(Node):
    def __init__(self):
        super().__init__('simple_vel_publisher')
        #------------------------------------------------
        #                    TODO:
        #  Create your publisher below! Remember that your
        #  publishes SimpleVelocity type message to a topic called
        #  simple_vel
        #------------------------------------------------
        #------------------------------------------------
        #                    TODO:
        #  Create your subscriber below! Remember that your
        #  subscribes to twist type message from the topic
        #  cmd_vel. User listener_callback as its callback function
        #------------------------------------------------
        #------------------------------------------------
        #                    TODO:
        #  Once you have completed creating your publisher,
        #  Initialise a twist message and call it self.msg
        #------------------------------------------------
        #------------------------------------------------
        #                    TODO:
        # Create your timer below and it should be set at
        # 1 seconds, use timer_callback() as its callback function
        #------------------------------------------------
    def listener_callback(self, msg):
        self.msg = msg

    def timer_callback(self):
        #------------------------------------------------
        #                    TODO:
        #  Create a SimpleVelocity Object and name it msg
        #------------------------------------------------
        msg.linear_velocity = self.msg.linear.x
        msg.angular_velocity = self.msg.angular.z
        #------------------------------------------------
        #                    TODO:
        #  Create a line below that publishes the msg object to
        #  the topic 
        #------------------------------------------------
        self.get_logger().info('Publishing linear velocity: "%s" m/s, angular velocity: "%s" rad/s' % (msg.linear_velocity, msg.angular_velocity))

def main(args=None):
    rclpy.init(args=args)
    node = SimpleVelPublisherNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()