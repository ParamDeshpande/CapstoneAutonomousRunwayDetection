
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

22/10/20 

1.24 PM 

So I have modified the rsa to fit to my needs. 
Ie encrypt no by number. see [rsa_reprise.c](src/rsa_reprise.c) ( although this is number by number I have a binary img so that doesnt really make sense to encrypt coz the pattern will be same, I couldn't think of other way of doing this, the example shown in the image converts the strings into nos and then sends to encrypt,  Im converting img pixels to nos and then sending those to encrypt , had that been a grayscale img thigs would be diff ,this is a binary img , plenty waste of computing I think) 


and created a few bash scripts see files  `src/*.bash` for their subsequent build and execution.

Now trying this stuff with canny.

The stuff with canny is integrated, so encrypted shows well 0. 
and 255 encrypted shows  .. some number . 

I am adding a offset to the values , either way if anyone sees such data it'be pretty obvious but for the sake of *doing it righter* Im adding a offset. 
so the output bin img would be not of 0 and random number but of random number and random number.

I'll be now testing if I can send tcp packets .. well i wont spend too much time hopefully on it in windows.

9.46 PM 

Sent and received TCP Packets. Using freeRTOS and my python code . 

Followed this [freeRTOS thread](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_TCP/TCP_Networking_Tutorial.html) step by step ... 

And this python [socket programming guide.](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj72bimzcjsAhU6yzgGHedjDecQFjAAegQIARAC&url=https%3A%2F%2Frealpython.com%2Fpython-sockets%2F&usg=AOvVaw2tdEuTXKhHE60pWe_ZyLIy)

[FreeRTOS docs](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_TCP/TCP_Networking_Tutorial_TCP_Client_and_Server.html) to read and modify tcp parameters buffers socket size etc... 