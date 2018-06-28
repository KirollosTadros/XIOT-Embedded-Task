#define interruptPin		Pin1
#define	ledPin			Pin2
#define UART_Pin		Pin3		//Write pin only
#define tempSensor		Pin4


/*
  This function initializa the pin and unlock ports if necessary
*/
initialize(interruptPin);
initialize(ledPin);
initialize(UART_Pin);
initialize(tempSensor);


/*
  Decided whether pin is input or output
*/
pinMode(tempSensor,INPUT);
pinMode(interruptPin, INPUT);
pinMode(ledPin, OUTPUT);
pinMode(UART_Pin, OUTPUT)

enable_Analog(tempSensor);			//The default is digital and this function enables the analog
enbale_interrupt(interruptPin);			//enables interrupt on this pin
edgeTigger(interruptPin, 1);			//Making it edge triggered
chooseEdge(interruptPin, NEGATIVE);		//Making it negtaive edge triggered
setPriority(interruptPin, 0);			//The Pirority of the interrupt pin is set to 0 (Highest)
activate_UART(UART1);				//Assume that the UART the uses Pin3 in sending data is UART1
activate_Timer(TIMER0);				//Activates Timer0
TIMER0_enableInterrupt(1);			//Enable interrupt for timer0
setPriority(TIMER0, 2);				//Sets Timer0 interrupt priority to 2
TIMER0_Periodic(True);				//Makes the timer periodic
TIMER0_wait100ms(30);				//Counts 3 Seconds then call the ISR of the timer 

setBaudRate(UART1, 115200);			//Sets Buad rate of the UART


/*
   The interrupt service routine of the interrupt on Pin1 according to the lookup table
*/

ISR_Pin1(void)
{

	UART1_Write("Pressed"); 

	if(digitalRead(ledPin))
		{
		digitalWrite(ledPin, LOW);
		UART1_Write("OFF");
		}		
	else
		{
		digitalWrite(ledPin,HIGH);
		UART1_Write("ON");
		}
}

/*
  The interrupt service routine of timer0 according to the lookup table
*/

ISR_TIMER0(void)
{
	uint8_t temp= ((analogRed(tempSensor))-0.5)*100;		//This is the conversion to *C of the temp sensor I used
	char[25] temp_buffer ;
	sprintf(temp_buffer, "The temp os %d *C", %d); 
	UART1_Write(temp_buffer);
}


