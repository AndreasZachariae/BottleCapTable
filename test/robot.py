#!/usr/bin/env python3

print('HelloWorld')

#lists
number=[1,2,3]
number=number+[2]
#tupels
tuple=(1,'bla')
#dictionary
dict = {2:12}
print(number[0],tuple[1],dict[2])

#class
class Robot:
    #constructor
    def __init__(self):
        print ("Robot started")

    #functions
    def salto(self,quantity):
        "makes x saltos"
        msg=""
        for i in range(quantity):
            msg+="huuui "
        return msg

    def move(self,goal):
        robot_path=0
        while (robot_path<goal):
            robot_path+=1
            print ("robot position: ",robot_path)
        '''
        for i in range(0,100):
            robot_path +=0.1
            print ("robot position: ",robot_path)
            if(robot_path>=2):
                print ("Goal reached")
                break
        '''
        return "Goal reached"
    
    #destructor
    def __del__(self):
        print("Robot stopped")


#Objekterzeugung
robot = Robot()

#endless loop
while True:

    robot_command="salto"
    robot_command = input("RobotDo >_ ")
    #conditions
    if(robot_command== "salto"):
        x=3
        x=input("How often? ")
        print(robot.salto(int(x)))
    elif(robot_command=="move"):
        goal=3
        goal=input("How far? ")
        print(robot.move(int(goal)))
    elif(robot_command=="log"):
        #Dateien beschreiben und auslesen
        write=input("Enter text to log: ")
        file_obj=open("robot_log.txt","a")
        file_obj.writelines((write+"\n"))
        file_obj.close()

        file_obj=open("robot_log.txt","r")
        read = file_obj.readlines()
        print ("logged: ", read)
    elif(robot_command=="stop"):
        break
    else:
        print("unknown")


