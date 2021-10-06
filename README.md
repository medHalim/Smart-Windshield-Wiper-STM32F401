# Smart Windshield Wiper Project

Design and Implementation of a Smart Windshield Wiper (Manual and Automatic) based on STM32F401CC 

## Project Overview

An intelligent infrared wiper based on an infrared rain sensor has been designed based on the STM32F4. A push button changes the wiper operating mode. 

In manual mode, a second push button will send different duty cycles, which are used to control the intermittency of the wiper servo motor. 

In automatic mode, the high luminance infrared diode is used as the lamp source to irradiate the automobile windshield. The optical signal is received by the infrared receiver and will be transformed into a digital signal. The signal will be read by the MCU, then the MCU will start the wiper of the servo motor.

The experiment has been made; results show that the system designed in this project is sensitive and reliable.

## Schematic
![Wiper_schematic](https://user-images.githubusercontent.com/58752435/136291056-c7cb2dd8-876c-4907-993d-897272033292.png)
