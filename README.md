# Smart Windshield Wiper Project

Design and Implementation of a Smart Windshield Wiper (Manual and Automatic) based on STM32F401CC 

## Project Overview

An intelligent infrared wiper based on an infrared rain sensor has been designed based on the STM32F4. A push button changes the wiper operating mode, and an ssd1306 OLED display shows the current operating mode. 

In manual mode, a second push button will send different duty cycles, which are used to control the intermittency of the wiper servo motor. 

In automatic mode, the high luminance infrared diode is used as the lamp source to irradiate the automobile windshield. The optical signal is received by the infrared receiver and will be transformed into a digital signal. The signal will be read by the MCU, then the MCU will start the wiper of the servo motor.

The experiment has been made; results show that the system designed in this project is sensitive and reliable.

Credits to github.com/4ilo and github.com/afiskon for the amazing ssd1306 library.

## Schematic
![Wiper_Schematic](https://user-images.githubusercontent.com/58752435/136293385-18aece0e-7040-41c5-9a71-eccf70b8e120.png)
