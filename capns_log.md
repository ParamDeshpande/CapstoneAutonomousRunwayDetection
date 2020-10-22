
17 oct 2020

11.33 PM

Starting with tcp transmission. Success Ref [this official link](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_TCP/examples_FreeRTOS_simulator.html#hostname)

Caveats :   
* CMD ping doesnt work, switched to linux (another pc) to see if ping worked well. It did :)

I tried Static IP conf with ping , IP4 rtos : `192.168.0.150`
IP4 Gateway : `192.168.0.1`

DHCP worked as well.    
Similar format !! 

19 Oct '20

10.48 PM

Ethernet Cable seems to be an issue for my workflow , Im starting / continuing with fusing canny.c , 

11.38 PM 

Turns out the part where they mention just connect to an MCU ( well I connected the ethernet cable to another laptop ) did'nt work for me. 
I needed an ethernet connection. 

Turns out I failed at validation of storing the img, some exception thrown stuff. 
But it compiled and the program ran.

21/10/20 

6.33 PM 

Deciding to make a git, to keep track of changes. Output file was alive, ie didnt fail, simply shows me a black img , although no edges , trying to see if the src canny code is corect on linux.