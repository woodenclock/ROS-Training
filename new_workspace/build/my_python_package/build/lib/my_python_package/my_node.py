# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import String

# class MyExampleNode(Node):
#     def __init__(self):
#         super().__init__('my_example_node')
#         self.counter = 0
#         self.publisher_ = self.create_publisher(String, '/my_string', 10)
#         self.timer = self.create_timer(1.0, self.timer_callback)
#         self.get_logger().info('my_example_node has started.')

#     def timer_callback(self):
#         self.counter += 1
#         msg = String()
#         msg.data = f'Publishing message number {self.counter}'
#         self.publisher_.publish(msg)

# def main(args=None):
#     rclpy.init(args=args)
#     node = MyExampleNode()
#     rclpy.spin(node)
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()



import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MySubscriberNode(Node):
    def __init__(self):
        super().__init__('my_subscriber_node')
        self.subscription = self.create_subscription(String, '/my_string', self.listener_callback, 10)
        self.get_logger().info('my_subscriber_node has started and is listening to /my_string')

    def listener_callback(self, msg):
        self.get_logger().info(f'Received: "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)
    node = MySubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
