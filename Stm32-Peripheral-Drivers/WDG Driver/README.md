# STM32 WatchDog DRIVER 

This Driver Allow User To Control and Use The WatchDog on The STM32F4xx Features.
The WatchDog is Used To Detect And Resolve Malfunctions due To SoftWare Failures.

---

## Features
The WDG Driver includes the following features:
- Independent WatchDog
- Window WatchDog
---
## Independent WatchDog (IWDG) Funtions

### IWDG_Init(IWDG_TypeDef * IWDGx, uint32_t Prescaler , uint32_t Counter)
- Initialize The WatchDog Peripheral
- IWDGx WatchDog Instance.
- Prescaler Select the prescaler of the IWDG
- Counter Specify the IWDG down-counter reload value.
* `To calculate the right counter to get the required TimeOut follow the next equation`
                
                LSI Clock x TimeOut
   Counetr = ------------------------- - 1 ;
               4 x 1000 x 2^(div_rank)
- LSI Clock = 32000 in the stm32f407 board
- div_rank This parameter depand on WWDG Prescaler it can be one of the following values:
   *         0 for  LL_IWDG_PRESCALER_4
   *         1 for  LL_IWDG_PRESCALER_8
   *         2 for  LL_IWDG_PRESCALER_16
   *         3 for  LL_IWDG_PRESCALER_32
   *         4 for  LL_IWDG_PRESCALER_64
   *         5 for  LL_IWDG_PRESCALER_128
   *         6 for  LL_IWDG_PRESCALER_256
    [0                                        TimeOut]//////////////////////////
    ---------------------------------------------------------------------------
### IWDG_Refresh(void)
- Refresh The Independent watchdog.
---

## Window WatchDog (WWDG) Funtions
### WWDG_Init(uint32_t Prescaler,uint32_t Counter, uint32_t Window)
- Initialize the window watchdog Configs .
- Prescaler Set the time base of the prescaler (WDGTB).
- Counter Set the Watchdog counter value to provided value (7-bits T[6:0])
- Window Set the Watchdog Window value to be compared to the downcounter (7-bits W[6:0])
 `To calculate the right counter to get the required TimeOut follow the next equation`
                `APB1 Clock` x `Max_TimeOut`
  `Counetr` = --------------------------- + 64 
              4096 x `2^(div_rank)` x 1000
  
                          `APB1 Clock` x `Min_TimeOut`
   `Window`  = `Counetr` - ---------------------------  
                        4096 x `2^(div_rank)` x 1000
  
- APB1 Clock = 16 000 000
- div_rank This parameter depand on WWDG Prescaler it can be one of the following values:
  *                  0 for  LL_WWDG_PRESCALER_1
  *                  1 for  LL_WWDG_PRESCALER_2
  *                  2 for  LL_WWDG_PRESCALER_4
  *                  3 for  LL_WWDG_PRESCALER_8
   ///////////[Min_TimeOut                             Max_TimeOut]///////////////////////
   ---------------------------------------------------------------------------------------

### WWDG_Refresh(uint32_t counter)
- Refresh The Independent watchdog.
- Counter Set the Watchdog counter value to provided value (7-bits T[6:0])
 
## Usage

To Use This Driver in Your Project You Need To: 

- copy `\Stm32-Peripheral-Drivers\WDG Driver\Src\WDG.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\WDG Driver\Inc\WDG.h` file and paste it on your project `Inc` directory
