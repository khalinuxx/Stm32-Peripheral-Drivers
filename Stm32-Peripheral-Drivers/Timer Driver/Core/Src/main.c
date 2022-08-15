#include "../Inc/Timer.h"



void led_init(void);
//uint32_t volatile a=0;
int main()
{


	/* Note : If u want to use OUTPUT COMPARE Mode just Uncomment the next Section */



 /*   LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD); // Enabling GPIO D Clock
    TIM_GPIO_Init(GPIOD,LL_GPIO_PIN_12,LL_GPIO_AF_2);


	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM4);  // Enabling TIMER4 Clock
	TIM_OC_Init(TIM4);                            // TIMER4 Output Compare Init Function
	TIM_OC_CHANNEL_Init(TIM4,LL_TIM_CHANNEL_CH1); //Channel initialization for OC Mode */



	led_init();
TIM6_EnableClock;
TIM4_EnableClock;
	TDelay_Init (TIM6);





/*
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM3);
	TIM_GPIO_Init(GPIOA,LL_GPIO_PIN_6,LL_GPIO_AF_2);

	TIM3_EnableClock;  // Enabling TIMER3 Clock
	TIM_IC_Init(TIM3,1000);
	TIM_IC_CHANNEL_Init(TIM3,LL_TIM_CHANNEL_CH1); //Channel initialization for OC Mode */




	/*
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2); // Enable TIMEx Clock
	TDelay_Init(TIM2);                                  // TIMER x initialize
	led_init();
	*/                                         // LEDS initialize




	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD); // Enabling GPIO D Clock
	TIM_GPIO_Init(GPIOD,LL_GPIO_PIN_13,LL_GPIO_AF_2);
	TIM_GPIO_Init(GPIOD,LL_GPIO_PIN_14,LL_GPIO_AF_2);
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM4);
	TIM_PWM_Init(TIM4);
	TIM_PWM_Channel_Init(TIM4, LL_TIM_CHANNEL_CH2);
	TIM_PWM_Channel_Init(TIM4, LL_TIM_CHANNEL_CH3);


	int i=0;
	while(1)
	{

		//a=TIM_IC_GetCap(TIM3,LL_TIM_CHANNEL_CH1);
        while(i<100)
        {
		TIM_PWM_SetDuty(TIM4,LL_TIM_CHANNEL_CH2,i+=5);
		TIM_PWM_SetDuty(TIM4,LL_TIM_CHANNEL_CH3,100-i);
		mDelay(10,TIM6);
        }
        while(i>0)
        {
    		TIM_PWM_SetDuty(TIM4,LL_TIM_CHANNEL_CH2,i-=5);
    		TIM_PWM_SetDuty(TIM4,LL_TIM_CHANNEL_CH3,100-i);
    		mDelay(10,TIM6);
        }
	  // mDelay(1000,TIM6);
      // LL_GPIO_TogglePin(GPIOD,LL_GPIO_PIN_12 | LL_GPIO_PIN_13 | LL_GPIO_PIN_14 | LL_GPIO_PIN_15);
	}



}

void led_init(void)
{
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOD);         // Enabling GPIO D Clock
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_12,LL_GPIO_MODE_OUTPUT);// SET Pin 12 Mode OUTPUT
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_13,LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_14,LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetPinMode(GPIOD,LL_GPIO_PIN_15,LL_GPIO_MODE_OUTPUT);
}





