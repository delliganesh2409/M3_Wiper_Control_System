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

 
