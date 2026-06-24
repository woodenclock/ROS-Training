import rclpy
from rclpy.node import Node
from perception_msgs.srv import GetObjectLocation
from visualization_msgs.msg import Marker


class ObjectSpawnerNode(Node):
    def __init__(self):
        super().__init__('object_spawner_node')
        #------------------------------------------------
        #                    TODO:
        #  Create your Service Client here! Remember to check
        #  what is the Client type you need.
        #------------------------------------------------
        self.client = self.create_client(GetObjectLocation, 'find_objects')
        self.marker_publisher = self.create_publisher(Marker, 'visualization_marker', 10)

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for find_objects service...')


    def send_request(self):
        #------------------------------------------------
        #                    TODO:
        #  Populate the send_request function.This is where you should craft your 
        #  request and read the response to be passed to the publish_markers function
        #  In the publish_markers fuction do the follwoing 

        # Set the pose of the marker

        # set shape, Arrow: 0; Cube: 1 ; Sphere: 2 ; Cylinder: 3

        # Set the scale of the marker

        # Set the color

        #------------------------------------------------
        request = GetObjectLocation.Request()

        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        response = future.result()

        if response is None:
            self.get_logger().info('Service call failed')
            return

        if response.result:
            self.get_logger().info(
                'Detected object pose: x="%s", y="%s", z="%s"'
                % (
                    response.object_pose.position.x,
                    response.object_pose.position.y,
                    response.object_pose.position.z,
                )
            )

            self.publish_marker(response.object_pose)

        else:
            self.get_logger().info('No object detected')

    def publish_marker(self, pose):
        marker = Marker()

        marker.header.frame_id = 'camera_link'
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = 'aruco_marker'
        marker.id = 0

        marker.type = Marker.CUBE
        marker.action = Marker.ADD

        marker.pose = pose

        marker.scale.x = 0.2
        marker.scale.y = 0.2
        marker.scale.z = 0.2

        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0
        marker.color.a = 1.0

        self.marker_publisher.publish(marker)
        
def main():
    rclpy.init()
    node = ObjectSpawnerNode()
    while rclpy.ok():
        node.send_request()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()