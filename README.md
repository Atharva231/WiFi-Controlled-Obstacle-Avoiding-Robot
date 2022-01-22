# WiFi-Controlled-Obstacle-Avoiding-Robot
Working:
    1) First the Power supply to the robot is switched ON. 
    2) The python program of Raspberry pi should be configured to run on boot.
    3) Once the raspberry pi is booted, it should be connected to the same LAN in which the user’s control device is connected to.
    4) The user side program must be executed and press the following keys:
    • w :- to move forward
    • s :- to move backwards
    • d :- to turn right
    • a :- to turn left
    • 0 (zero) :- to stop
    5) After pressing a button, a corresponding signal is sent to ARDUINO by raspberry pi through Serial Communication, 
        and the ARDUINO in turn sends signals to Motor Driver circuit to switch ON/OFF the respective motors.
