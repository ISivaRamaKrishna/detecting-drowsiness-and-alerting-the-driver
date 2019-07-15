# detecting-drowsiness-and-alerting-the-driver
To prevent and reduce the rate of  occuring accidents by using the sensors we can estimate the condition of the driver and prevents the accidents.

# AIM:
To prevent and reduce the rate of  occuring accidents by using the sensors we can estimate the condition of the driver and prevents the accidents.

# ABSTRACT:

Whenever a person feels asleep is called drowsiness
Now a days road accidents are happening more due to many reasons in that on of the main reason is drowsiness .
And another reason is drunk and drive .

In night  times vehicle drivers feels drowsiness ,and he lost his body control which leads to accidents.this is because when the driver is not able to control his vehicle at very speed on the road .
And the same problem occures if he was drunk.

The national highway traffic safety administration  (NHTSA) said that there are 100000 of accidents are occured due to the drowsiness .
Because of these drowsiness 71000 injuries are occured and 12.5 billion in damazed productivity and property loss.
Driving performance deteriorates with incresed drowsiness with resulting crasing consistuting 20%-23% of all vehical accidents

# Eye blink sensor working:

# SPECIFICATION:

Operating Voltage  :+5V DC regulated
Operating Current  :100mA
Output Data Level  : TTL Level
Eye Blink Indicated by LED and Output High Pulse

# USING SENSOR:

Connect regulated DC power supply of 5 Volts. Black wire is Ground, Next middle wire is Brown which is output and Red wire is positive supply. These wires are also marked on PCB.To test sensor you only need power the sensor by connect two wires +5V and GND. You can leave the output wire as it is. When Eye closed, LED is off & the output is at 0V.Put Eye blink sensor glass on the face within 15mm distance, and you can view the LED blinking on each Eye blink.The output is active high for Eye close and can be given directly to microcontroller for interfacing applications.
EYE BLINK OUTPUT

5V (High)    →   LED ON When Eye is close.

0V (Low)   →   LED OFF when Eye is open.

This eye blink sensors works based on the eye moment of the driver .
We are already fixing the sensors ,by using these sensors we absorves the moment of blinking of eyes .
When the drivers eye is at almost close position then the performance of this sensors output is low.
During the driving if driver feels drowsiness the sensor recognizes the condition of the driver and give input to the microcontroller.


Based on the sensor readings MICROCONTROLLER alerts the driver by using buzzer and speaker and if he dosen't respond it will stops the vehicle by using an electrical break and at a time it will alert the opposite vehicles also.
# Advantages :


By using this project we can save lot of lives
And it is very useful to the people who is walking on the road and also for the other vehicles.
It used to reduce the accidents.

# Conclusion :

The proposed system is used to avoid various road accidents caused by drowsy driving .and also this system is used for security perpose of a driver to caution the driver if any fire accident or any gas leakage.
