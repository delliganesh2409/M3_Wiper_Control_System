# WIPER CONTROL SYSTEM
![windshield_wiper_transmission_operation](https://user-images.githubusercontent.com/101784923/168442697-a7cfcf02-454e-408a-a317-06cbbf1f7508.gif)



## Badges

|cppcheck-action|Build CI Linux|Build CI - Windows|Analysis|Git Inspector|codiga|
|:--:|:--:|:--:|:--:|:--:|:--:|
|[![Cppcheck Analysis](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/c-cpp.yml)|[![Build-Linux](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/build%20on%20linux.yml/badge.svg)](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/build%20on%20linux.yml)|[![Build CI - Windows](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/Build%20on%20windows.yml/badge.svg)](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/Build%20on%20windows.yml)|[![Analysis](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/analysis.yml/badge.svg)](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/analysis.yml)|[![Contribution Check - Git Inspector](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/delliganesh2409/M3_Wiper_Control_System/actions/workflows/gitinspector.yml)|![Quality](https://api.codiga.io/project/33585/score/svg)









# Abstract

## Wiper Contol System 
Windshield wipers keep the windshield of a vehicle clear from rain water, snow, dust and road spray. The first windshield wipers were operated manually by moving a lever inside the car. Later wiper designs were powered by the engine's manifold vacuum. Virtually all wipers today employ an electric motor coupled with a linkage mechanism and are actuated by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver.Modern windshield wipers may also be run intermittently. The intermittent wiper option cycles the wipers on and off every few seconds rather than running constantly. Intermittent control first appeared in automobiles in the 1970's. The original intermittent wipers were controlled by a constant power source that was routed through a series of switches. Now, virtually all automotive wipers are controlled by a microprocessor. In this project, I explain about how wiper system works based on STM32F4, an ARM based Microcontroller with the help of STM32CUBE IDE software.


# Requirements

## Basic Function
The wiper serves to clean the windshield of the car at the front and rear, although not all cars have wipers on the rear side. Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield. When the wiper switch is in the off position, the wiper will not function. When the wiper switch is in low-speed mode, the wiper will work at low speed. Accordingly, when the wiper switch is in high-speed mode, the wiper will work at a fairly high speed.


## Working of proposed system

I am using four different coloured LEDs instead of wipers.??

Step 1: When the blue button is pressed ONCE for 2 seconds, the vehicle will be in ACC mode and the RED LED will start blinking constantly.

Step 2: When the blue button is pressed again for 1 second, the vehicle will be in ignition mode and the orange, blue, and green LEDs will start        blinking at 1 Hz frequency.

Step 3: When the blue button is pressed again for 1 second, the speed of the LED changes from 1 Hz to 4 HZ.

Step 4: When the blue button is pressed again for 1 second, the speed of the LED changes from 4 Hz to 8Hz.

Step 5; When the blue button is pressed again, the LED turns off.

## 4W & H  (WHO,WHAT,WHEN,WHERE,HOW)

# * WHAT
    Wiper Control System
    
# * WHERE
    Vehicles
    
# * WHEN
    Wiper works for removing oil, dust, rainwater, and dirt that gets stuck to the windshield.
    
# * HOW
    By pressing the button, the wiper turns on and off, changing the speed of the wiper. 
    
# * WHO
    Drivers
    

## SWOT(STRENGTH,WEAKNESS,OPPORTUNITY,THREATS)

# * Strength
    1. Safety
    2. Visibility
    3. We can change the speed of wiper.
    
# * Weakness
    1. Burned out fuse
    2. Broken Wiper control
    3. High cost
    4. Not automatic
    
 # * Threats
     1. failer in wiper motor
     2. Damanged wiper blades
     
 # Requirements 
   1. High level requirements
   2. Low level requirements
   
 ## High Level Requirements

| ID        |  Description                                       |  Status         |
| :-------- | :--------------------------------                  | :-------------- |
|`HR01`	    |`Vehicle is in ACC mode `                           |`IMPLEMENTED`  |
|  `HR02`   | `Vehicle is in Ignition mode`                      | `IMPLEMENTED `  |   
|`HR03`     | `Wiper turned ON`                                  |`IMPLEMENTED`    |
|`HR04`	    |`Wiper Speed can be changed at three different level`|`IMPLEMENTED`    |
|`HR05`	    |`Wiper turned OFF`                                   |`IMPLEMENTED`    |


## low level Requriments  

|  ID   |  Description                                                                 |  HLR ID              | Status (Implemented/Future)|           
| :-----| :----------------------------------------------------                        | :--------------------| :-------------------       |
| `LR01`|	`By pressing the button for 2 seconds, RED LED turns ON `                  |`HR01`                |	`IMPLEMENTED`              |
|`LR02`	|  `By pressing the button again for 1 seconds, Orange, Green and Blue turns ON`|     ` HR02`	        |`IMPLEMENTED`             |
|`LR03` |	`By pressing the button again for 1 seconds, Speed of LED changed          `|  `HR04`              |	`IMPLEMENTED`          |
|`LR04`|	`By pressing the button again for 2 seconds, All LED turns OFF  `	        |       `HR05`          |`IMPLEMENTED`             |



# Design

# Block Diagram
![block](https://user-images.githubusercontent.com/101784923/168284785-d611a2ce-3dfe-4999-a7bc-bcfe0371c18f.png)



# Structural Diagram
![m3_struct](https://user-images.githubusercontent.com/101784923/168285101-ec9ccb30-b6b1-49df-869b-438b5ad5a5ed.png)





# Flowchart 
![m3_flow](https://user-images.githubusercontent.com/101784923/168285176-dc698d6d-e997-403c-9b6d-e449e9425637.png)


# The Test plan of this project is

* To know the importnace of the project.
* To know the work in specific conditions.
* To know the Working Principle.
* To verify the devices are interfacing with microcontroller.

# Test Cases

## High Level Test plan


| ID        |  Description                                       |  Expected output|  Expected output|
| :-------- | :--------------------------------                  | :-------------- | :-------------- |
|`HR01`	    |`Vehicle is in ACC mode `                           |       `PASSED`  |  `SUCCESS`      |
|  `HR02`   | `Vehicle is in Ignition mode`                      | `PASSED `       |   `SUCCESS`      |
|`HR03`     | `Wiper turned ON`                                  |   `PASSED`      |   `SUCCESS`      |
|`HR04`	    |`Wiper Speed can be changed at three different level`|    `PASSED`    |   `SUCCESS`      |
|`HR05`	    |`Wiper turned OFF`                                   |    `PASSED`    |   `SUCCESS`      |


## low level Requriments  

|  ID   |  Description                                                                 |  HLR ID              | Expected output|  Expected output|           
| :-----| :----------------------------------------------------                        | :--------------------| :-------------- | :--------------|
| `LR01`|	`By pressing the button for 2 seconds, RED LED turns ON `                    |`HR01`                |	  `PASSED`     |  `SUCCESS`      |
|`LR02`	|  `By pressing the button again for 1 seconds, Orange, Green and Blue turns ON`|     ` HR02`	        |`PASSED `       |   `SUCCESS`      |
|`LR03` |	`By pressing the button again for 1 seconds, Speed of LED changed          `  |  `HR04`              |`PASSED `       |   `SUCCESS`      |	
|`LR04`|	`By pressing the button again for 2 seconds, All LED turns OFF  `	           |       `HR05`          |`PASSED `       |   `SUCCESS`      |



# OUTPUT

##  1. When button pressed for 2 for seconds
![Screenshot 2022-05-14 223405](https://user-images.githubusercontent.com/101784923/168442137-cab3bf24-2510-46b3-a947-48a8eb36c302.png)

##  2. When button pressed for 1 second

![Screenshot 2022-05-14 223548](https://user-images.githubusercontent.com/101784923/168442206-6d301827-0cfb-403b-a007-c4ac1077e2c2.png)

##  3. When button pressed again for 1 second [wiper speed changed to 4Hz]
![Screenshot 2022-05-14 223658](https://user-images.githubusercontent.com/101784923/168442251-d2c2fe00-dc0c-4f6d-8979-ffc95047c2ac.png)

## 4. When button pressed again for 1 second [wiper speed changed to 8 Hz]
![Screenshot 2022-05-14 224037](https://user-images.githubusercontent.com/101784923/168442345-3dfc994e-a9da-4163-b084-39ecca141b3c.png)

## 5. When button pressed again for 2 second [wiper turns off]
![Screenshot 2022-05-14 224200](https://user-images.githubusercontent.com/101784923/168442415-5dbf8a91-da67-43bf-a320-d87bc036d887.png)


# Output video
https://user-images.githubusercontent.com/101784923/168447030-152cebcc-554e-4ec7-b1c6-ed93b981f762.mp4

