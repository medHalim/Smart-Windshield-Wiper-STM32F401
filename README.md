# Smart Windshield Wiper Project

An intelligent infrared wiper based on an infrared rain sensor has been designed based on the STM32F4. A push button changes the wiper operating mode. 

In manual mode, a second push button will send different duty cycles, which are used to control the intermittency of the wiper servo motor. 

In automatic mode, the high luminance infrared diode is used as the lamp source to irradiate the automobile windshield. The optical signal is received by the infrared receiver and will be transformed into a digital signal. The signal will be read by the MCU, then the MCU will start the wiper of the servo motor.

The experiment has been made; results show that the system designed in this project is sensitive and reliable.
