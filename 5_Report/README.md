## Abstract

# Wiper Contol System 
Windshield wipers keep the windshield of a vehicle clear from rain water, snow, dust and road spray. The first windshield wipers were operated manually by moving a lever inside the car. Later wiper designs were powered by the engine's manifold vacuum. Virtually all wipers today employ an electric motor coupled with a linkage mechanism and are actuated by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver.Modern windshield wipers may also be run intermittently. The intermittent wiper option cycles the wipers on and off every few seconds rather than running constantly. Intermittent control first appeared in automobiles in the 1970's. The original intermittent wipers were controlled by a constant power source that was routed through a series of switches. Now, virtually all automotive wipers are controlled by a microprocessor. In this project, I explain about how wiper system works based on STM32F4, an ARM based Microcontroller with the help of STM32CUBE IDE software.


# Requirements

## Basic Function
The wiper serves to clean the windshield of the car at the front and rear, although not all cars have wipers on the rear side. Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield. When the wiper switch is in the off position, the wiper will not function. When the wiper switch is in low-speed mode, the wiper will work at low speed. Accordingly, when the wiper switch is in high-speed mode, the wiper will work at a fairly high speed.


## Working of proposed system

I am using four different coloured LEDs instead of wipers. 

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
