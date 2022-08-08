# STM32 DRIVERS Based on Low-Layer Drivers 
The Drivers in `Stm32-Peripheral-Drivers/` directory is a STM32CubeIDE project which uses the Low-Layer drivers and is deployed to the STM32F407VG.

**[The main STM32 Peripheral Drivers repository is located here.](https://github.com/mouadhgit/Stm32-Peripheral-Drivers)**


## Dependencies

To compile the project for the STM32, install the following Software:
- [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
- st-stlink-server.1.2.0-5.1 (Provided with the [IDE](https://www.st.com/en/development-tools/stm32cubeide.html))

---

## Compilation deploying
To compile and deploy the STM32 project we need to : 

1.first open the STM32CubeIDE.

#### Include the LL drivers
```
Left button click on the Driver project -> Properties -> C/C++ General -> Path and Symbols -> includes -> add -> File system-> Select the \DRIVERS\STM32F4xx_HAL_Driver\Inc directory
```  
- Do the same thing for the `\DRIVERS\CMSIS\Include` and `\DRIVERS\CMSIS\Device\ST\STM32F4xx\Include` directories
#### Add the symbols of our particular board under the Paths and Symbols
```
Left button click on the project -> Properties -> C/C++ General -> Path and Symbols -> Symbols
```  
Remove all what in the list except the #DEBUG marco than click on add :
- write `STM32F407xx` on Name TextBox for our board than click on `apply` and `apply and close`, if you have other board you can check `\DRIVERS\CMSIS\Device\ST\STM32F4xx\Include\stm32f4xx.h` file toknow the way it is defined.
  
click on add again:
- write `USE_FULL_LL_DRIVERS` on Name TextBox for our board than click on `apply` and `apply and close`, To tell the project that we use the LL Drivers.


## Usage  

To use the drivers in your project you need to: 

- copy `\Stm32-Peripheral-Drivers\Driver_Folder\Src\Driver_Name.c` and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Driver_Folder\Inc\Driver_Name.h`  and paste it on your project `Inc` directory

## Divers
This project contain :
- Gpio Driver



