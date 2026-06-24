import rclpy
from rclpy.node import Node

class MyExampleNode(Node):
    def __init__(self):
        super().__init__('my_example_node')
        self.counter = 0
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info('my_example_node has started.')

    def timer_callback(self):
        self.counter += 1
        self.get_logger().info(f'Logging every 1 second - Count: {self.counter}')

def main(args=None):
    rclpy.init(args=args)
    node = MyExampleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
