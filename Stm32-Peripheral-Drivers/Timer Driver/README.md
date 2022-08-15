# STM32 Timer DRIVER 

This driver Allows u to grnerate a time delay.

---

## Features
The Timer Driver includes the following features:

- Generate a time delay
- INPUT/OUTPUT COMPARE MODE .
- PWM MODE


---

### TIM_GPIO_Init(GPIO_TypeDef *GPIOx,uint32_t Pin,uint32_t Alternate)
- Initialize The GPIO Pin 
- GPIOx GPIO Instance where x can be (A..H)
- Pin GPIO Pin LL_GPIO_PIN_x whre x can be (0..15)
- Alternate LL_GPIO_AF_x where x can be (0..15)
---
## TIMER DELAY Funtions

### TDelay_Init (TIM_TypeDef *TIMx)
* Initialise Timer x
- TIM x where x can be (1..14) to select the TIMER peripheral.
### uDelay(uint16_t us,TIM_TypeDef *TIMx)
* Pauses the program for the amount of time (in microseconds).
-  TIMx Timer Instance
-  us the number of microseconds to pause.
### TDelay(int ms,TIM_TypeDef *TIMx)
* Pauses the program for the amount of time (in milliseconds).
-  TIMx Timer Instance
-  ms the number of milliseconds to pause.
---
## TIMER OUTPUT COMPARE Funtions
### TIM_OC_Init (TIM_TypeDef *TIMx);
- Initialize the timer For the output compare mode.
- TIMx Timer Instance
### TIM_OC_CHANNEL_Init(TIM_TypeDef *TIMx, uint32_t Channel)
- Initialize the TIMER Channel For the output compare mode.
- TIMx Timer Instance
- channel The selected channel...LL_TIM_CHANNEL_CHx where x can be (1..4).
---

## TIMER INPUT Capture Funtions
### TIM_IC_Init(TIM_TypeDef *TIMx,int TIM_freq)
- Initialize the timer For the input compare mode.
- TIMx Timer Instance
- TIM_freq Timer frequency
### TIM_IC_CHANNEL_Init(TIM_TypeDef *TIMx, uint32_t Channel)
- Initialize the TIMER Channel For the input compare mode.
- TIMx Timer Instance
- channel The selected channel...LL_TIM_CHANNEL_CHx where x can be (1..4). 
---

## TIMER PWM Funtions
### TIM_PWM_Init(TIM_TypeDef *TIMx)
- Initialize the timer For the PWM mode
- TIMx Timer Instance
### TIM_PWM_Channel_Init(TIM_TypeDef *TIMx, uint32_t Channel)
- Configure Timer Channel for the pwm mode
- TIMx Timer Instance
- channel The selected channel...LL_TIM_CHANNEL_CHx where x can be (1..4).
### TIM_PWM_SetDuty(TIM_TypeDef *TIMx,uint32_t Channel,int Duty)
- Set PWM Duty Cycle 
- TIMx Timer Instance
- channel The selected channel...LL_TIM_CHANNEL_CHx where x can be (1..4).
- Duty varies betwen 0 and 100
### TIM_PWM_SetFreq(TIM_TypeDef *TIMx,int pwmF)
- Set PWM Frequency
- TIMx Timer Instance
- pwmF PWM frequency
---
## NOTE 
Don't forget to Enable the GPIO clock before using the `TIM_GPIO_Init` function
Don't forget to Enable the TIMER clock before using the `TIM_OC_Init` , `TIM_IC_Init` and `TDelay_Init` functions 
Don't Forget to use TIM_GPIO_Init function before 
- TIM_OC_CHANNEL_Init
- TIM_IC_CHANNEL_Init
- TIM_PWM_Channel_Init 
---
## Usage

To use this driver in your project you need to: 

- copy `\Stm32-Peripheral-Drivers\Timer Driver\Src\Timer.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\Timer Driver\Inc\Timer.h` file and paste it on your project `Inc` directory
