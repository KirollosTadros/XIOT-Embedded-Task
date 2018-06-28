#include <stdint.h>
#include "bits.h"
#include "registers.h"
#include <stdbool.h>


#define Output(P,Bit)           SetBit(GPIO_DIR(P),Bit)
#define Input(P,Bit)            ClearBit(GPIO_DIR(P),Bit)
#define Set(P,Bit)              SetBit(GPIO_DATA(P),Bit)
#define Clear(P,Bit)            ClearBit(GPIO_DATA(P),Bit)
#define Get(P,Bit)              GetBit(GPIO_DATA(P),Bit)



void Init(uint32_t Port);
void Port_Dir (uint32_t Port, uint8_t Dir);
void Pin_Dir (uint32_t Port, uint8_t Pin,bool Dir );
void PortWrite (uint32_t Port, uint8_t Write );
void PinWrite (uint32_t Port, uint8_t Pin, bool Write);
bool PinRead (uint32_t Port, uint8_t Pin );
uint8_t PortRead (uint32_t Port);
void PinMode(uint8_t Pin,bool Dir);
void DigitalWrite(uint8_t Pin,bool Write);
bool DigitalRead (uint8_t Pin);
void PinPUR (uint8_t Pin);
