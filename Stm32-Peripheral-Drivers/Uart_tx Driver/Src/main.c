#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_bus.h"

void uart_write(char ch);
void uart_init();



int main(){
uart_init();
  while(1){

	           uart_write('y');

	           for(int itr=0 ; itr<900000;itr++){}

     }


}

void uart_init ()
{
	LL_AHB1_GRP1_EnableClock (LL_AHB1_GRP1_PERIPH_GPIOA);
	LL_APB1_GRP1_EnableClock (LL_APB1_GRP1_PERIPH_USART2);
	LL_GPIO_SetPinMode(GPIOA, LL_GPIO_PIN_2, LL_GPIO_MODE_ALTERNATE);
	LL_GPIO_SetAFPin_0_7 (GPIOA, LL_GPIO_PIN_2,LL_GPIO_AF_7);

	LL_USART_Disable(USART2);
	LL_USART_SetTransferDirection(USART2, LL_USART_DIRECTION_TX);
	LL_USART_ConfigCharacter(USART2, LL_USART_DATAWIDTH_8B,LL_USART_PARITY_NONE, LL_USART_STOPBITS_1);
	LL_USART_SetBaudRate (USART2,16000000,LL_USART_OVERSAMPLING_8, 115200);
	LL_USART_Enable(USART2);

}

void uart_write(char ch)
{
	while (!LL_USART_IsActiveFlag_TXE (USART2)){}
	LL_USART_TransmitData8(USART2,ch);

}
