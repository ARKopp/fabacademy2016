import explorerhat
from gpiozero import Button, LED, Motor, Robot, Buzzer
from time import sleep


#button = Button(9)
#led1 = LED(10)
#buzzer = Buzzer(17)

#motor1 = Motor(forward=19 , backward=20) #gpio zero motor1
#motor2 = Motor(forward=21 , backward=26) #gpio zero motor2

#robot = Robot(left=(19, 20), right=(21, 26))



#the explorer hat has already some motor functions build in
#invert() - Reverses the direction of forwards for this motor
#forwards( speed ) - Turns the motor "forwards" at speed ( default 100% )
#backwards( speed ) - Turns the motor "backwards" at speed ( default 100% )
#speed(-100 to 100) - Moves the motor at speed, from full backwards to full forwards

#speed_levels = [0, 25, 50, 75, 100]
speed_levels = [0, 0.25, 0.5, 0.75]

active_speed = 0



def button_pressed():
        print("Button pressed")
        led1.on()
        explorerhat.light.toggle()

        global active_speed
        active_speed = (active_speed + 1) % len(speed_levels)
        explorerhat.motor.forwards(speed_levels[active_speed]) #with explorerhat
        #motor1.forward(speed_levels[active_speed]))   #with gpio zero Motor
		#motor2.forward(speed_levels[active_speed]))
		#robot.forward = (active_speed + 1) % len(speed_levels)

button.when_pressed = button_pressed

while True:
       sleep(5)