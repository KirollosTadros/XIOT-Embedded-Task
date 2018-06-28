#include "NVIC.h"
#include "registers.h"
#include "GPIO.h"
#include "bits.h"
#include <stdint.h>

edgeTrigger(uint8_t Pin, bool edge)
{
	 switch (Pin/10)
 {
 case 0:if(edge)  Clear(GPIO_IS(PortA),Pin%10); Set(GPIO_IS(PortA),Pin%10); break;
 case 1:if(edge)  Clear(GPIO_IS(PortB),Pin%10); Set(GPIO_IS(PortB),Pin%10); break;
 case 2:if(edge)  Clear(GPIO_IS(PortC),Pin%10); Set(GPIO_IS(PortC),Pin%10); break;
 case 3:if(edge)  Clear(GPIO_IS(PortD),Pin%10); Set(GPIO_IS(PortD),Pin%10); break;
 case 4:if(edge)  Clear(GPIO_IS(PortE),Pin%10); Set(GPIO_IS(PortE)),Pin%10; break;
 case 5:if(edge)  Clear(GPIO_IS(PortF),Pin%10); Set(GPIO_IS(PortA),Pin%10); break;

 }
}

chooseEdge(uint8_t Pin, bool Negative)
{
	switch (Pin/10)
	{
	case 0:if(Negative)  Clear(GPIO_IEV(PortA),Pin%10); Set(GPIO_IEV(PortA),Pin%10); break;
	case 1:if(Negative)  Clear(GPIO_IEV(PortB),Pin%10); Set(GPIO_IEV(PortB),Pin%10); break;
	case 2:if(Negative)  Clear(GPIO_IEV(PortC),Pin%10); Set(GPIO_IEV(PortC),Pin%10); break;
	case 3:if(Negative)  Clear(GPIO_IEV(PortD),Pin%10); Set(GPIO_IEV(PortD),Pin%10); break;
	case 4:if(Negative)  Clear(GPIO_IEV(PortE),Pin%10); Set(GPIO_IEV(PortE),Pin%10); break;
	case 5:if(Negative)  Clear(GPIO_IEV(PortF),Pin%10); Set(GPIO_IEV(PortF),Pin%10); break;

 }
}

bothEdge(uint8_t Pin, bool True)
{
	switch (Pin/10)
	{
	case 0:if(True)  Set(GPIO_IEV(PortA),Pin%10); Clear(GPIO_IEV(PortA),Pin%10); break;
	case 1:if(True)  Set(GPIO_IEV(PortB),Pin%10); Clear(GPIO_IEV(PortB),Pin%10); break;
	case 2:if(True)  Set(GPIO_IEV(PortC),Pin%10); Clear(GPIO_IEV(PortC),Pin%10); break;
	case 3:if(True)  Set(GPIO_IEV(PortD),Pin%10); Clear(GPIO_IEV(PortD),Pin%10); break;
	case 4:if(True)  Set(GPIO_IEV(PortE),Pin%10); Clear(GPIO_IEV(PortE),Pin%10); break;
	case 5:if(True)  Set(GPIO_IEV(PortF),Pin%10); Clear(GPIO_IEV(PortF),Pin%10); break;

 }

	enableInterrupt(uint8_t Pin)

	{
		 switch (Pin/10)
		{
			case 0: set(GPIO_IM(PortA),Pin%10); GPIO_ICR(PortA)=0x10; break;
			case 1: set(GPIO_IM(PortB),Pin%10); GPIO_ICR(PortB)=0x10; break;
			case 2: set(GPIO_IM(PortC),Pin%10); GPIO_ICR(PortC)=0x10; break;
			case 3: set(GPIO_IM(PortD),Pin%10); GPIO_ICR(PortD)=0x10; break;
			case 4: set(GPIO_IM(PortE),Pin%10); GPIO_ICR(PortE)=0x10; break;
			case 5: set(GPIO_IM(PortF),Pin%10); GPIO_ICR(PortF)=0x10; break;

		}
	}
}