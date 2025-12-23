#include "my_led.h"
#include "ext_intr.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



extern volatile int ext_flag;
int main(void)
{
	led_init();
	extint_init();
	while(1)
	{
//		led_on(12);
//		DelayMs(200);
//		led_off(12);
//		DelayMs(200);
		if(ext_flag == 1)
		{
			led_on(12);
			DelayMs(200);
			led_off(12);
			DelayMs(200);
		}
		ext_flag=0;
	}
}

