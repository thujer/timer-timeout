#define uchar unsigned char
#define uint unsigned int

extern void Timeout_Init();
extern void Timeout_Set(uchar Counter, uint Time);
extern bit  Timeout(uchar Counter);
extern uint Timeout_Value(uchar Counter);


