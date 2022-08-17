# STM32 Analogue To Digital Converter (ADC) DRIVER 

This Driver Allow User To ADC Periph in Diffrent Mode On Stm32F4 Board .


---

## Features
The ADC Driver includes the following features:

- Initializes the ADCx Periph 
- Read data From ADC.
- Use ADC Interrupt.
---
## Clocks
### ADC Clock Enable
To Enable Clock For ADCs Just Use The Next Instruction 
- ADCx_ClockEnable; ----> Where x Can Be 1,2 or 3  
### ADC Clock Disable
To Disable Clock For ADCs Just Use The Next Instruction 
- ADCx_ClockDisable; ----> Where x Can Be 1,2 or 3 
---
## ADC Funtions
This driver contain 3 funtions
### ADC_GPIO_Init(GPIO_TypeDef *GPIOx,uint32_t Pin)
- Initialize ADC GPIO PIN.
- ADCx ADC instance
- Pin LL_GPIO_PIN_x where x can be (0..15)
### ADC_Init(ADC_TypeDef *ADCx))
- Initialize some features of ADC instance.
- ADCx ADC instance
### ADC_REG_Init(ADC_TypeDef *ADCx)
- Initialize some features of ADC group regular.
- ADCx ADC instance
### ADC_Com_Init(ADC_TypeDef *ADCx)
- Initialize some features of ADC common parameters
-          (all ADC instances belonging to the same ADC common instance)
-          and multimode (for devices with several ADC instances available).
- The setting of ADC common parameters is conditioned to
-          ADC instances state:
-          All ADC instances belonging to the same ADC common instance
-          must be disabled.
- ADCx ADC  instance 
### ADC_Channel_Init(ADC_TypeDef *ADCx,uint32_t Rank , uint32_t Channel)
- Initialize ADC Channel
- ADCx ADC instance
- Rank LL_ADC_REG_RANK_x where x can be(1..16)
- Channel  ADC channel LL_ADC_CHANNEL_x where x can be (1..16)
### ADC_Read(ADC_TypeDef *ADCx)
- Read ADC Conversion Value
- ADCx ADC instance
## ADC Interrupt Funtions
### ADC_IRQ_Init(uint32_t priority)
- Config and Enable NVIC For ADC Interrupt
- Periority Interrupt periority
### ADC_IType_Enable(ADC_TypeDef *ADCx,ADC_IType IT)
- Enable ADC Interrupts
- ADCx The ADC Instance .
- IT   Enable Specific Interrupt wich Can Be:
-                              EOCS_IT   ------> Enable interruption ADC group regular end of unitary conversion or end of sequence conversions.
-                              OVR_IT    ------> Enable ADC group regular interruption overrun.
-                              JEOS_IT   ------> Enable interruption ADC group injected end of sequence conversions.
-                              AWD1_IT   ------> Enable interruption ADC analog watchdog 1..
### ADC_IType_Disable(ADC_TypeDef *ADCx,ADC_IType IT)
- Disable ADC Interrupts
- ADCx The ADC Instance .
- IT   Disable Specific Interrupt wich Can Be:
-                              EOCS_IT   ------> Disable interruption ADC group regular end of unitary conversion or end of sequence conversions.
-                              OVR_IT    ------> Disable ADC group regular interruption overrun.
-                              JEOS_IT   ------> Disable interruption ADC group injected end of sequence conversions.
-                              AWD1_IT   ------> Disable interruption ADC analog watchdog 1..
# ADC_IRQnHandler(void)
- Use This Handler When The Interruption is Enable 
- Write The Action That Want To be Happen During The Interrption
## Usage

To Use This Driver in Your Project You Need To: 

- copy `\Stm32-Peripheral-Drivers\ADC Driver\Src\ADC.c` file and paste it on your project `Src` directory

- copy `\Stm32-Peripheral-Drivers\ADC Driver\Inc\ADC.h` file and paste it on your project `Inc` directory
