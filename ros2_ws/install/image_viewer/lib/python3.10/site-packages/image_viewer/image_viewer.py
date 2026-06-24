import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ViewImage(Node):
    def __init__(self):
        super().__init__('image_processing_node')
        self.bridge = CvBridge()
        self.image_window = cv2.namedWindow("Camera Output")

        #------------------------------------------------
        #                    TODO:
        #  Create your subscriber here! Remember to check
        #  what is the type of message you are receiving!.
        #  Once you have completed creating your publisher,
        #  Initialise a twist message and call it self.cmd_msg
        #------------------------------------------------
        self.subscription_ = self.create_subscription(Image, '/image_raw', self.view_image, 10)



	#-------------------------------------------------
	#                    TODO:
	#          Create a callback for your subscriber!
	#-------------------------------------------------

    def view_image(self, img_msg):
        cv_image = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding='bgr8')
        cv2.imshow("image", cv_image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = ViewImage()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\nKeyboard interrupt detected. Exiting gracefully...")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
