#Import packages
import rospy
from std_msgs.msg import String

#initializing
rospy.init_node("test_node",anonymous=True)

#printing messages
rospy.loginfo("infonachricht, blabla %s","args")

msg = String()
msg.data = "string data"

#publishing a topic
pub = rospy.Publisher("test_topic",String,queue_size=10)
pub.publish("hallo")

#callback function
def callback(data):
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

#subscribing a topic
rospy.Subscriber("test_topic",String,callback)

#sleep function
rate = rospy.Rate(10) #10 Hz
rate.sleep()

rospy.spin() #keeps active until shutdown
