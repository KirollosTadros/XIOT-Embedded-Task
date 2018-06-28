#define NVIC		0xE000E000

/*
	Offset
*/

#define	 EN0		0x100
#define	 EN1		0x104
#define	 EN2		0x108
#define	 EN3		0x10C
#define	 EN4		0x110

#define	 PRI0		0x400
#define	 PRI1		0x404
#define	 PRI2		0x408
#define	 PRI3		0x40C
#define	 PRI4		0x410
#define	 PRI5		0x414
#define	 PRI6		0x418
#define	 PRI7		0x41C
#define	 PRI8		0x420
#define	 PRI9		0x424
#define	 PRI10		0x428

void edgeTrigger(uint8_t Pin, bool edge);		//Decide where it is edge tiggered or not
void chooseEdge(uint8_t Pin, bool Negative)		//Choose if it negative edge triggered or positive
void bothEdge(uint8_t Pin, bool True);			//Decides where it is both edge triggered or single
void enableInterrupt(uint8_t Pin);			//Enables interrupt for the chosen pin
