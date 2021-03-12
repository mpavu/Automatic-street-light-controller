#include<reg51.h>
sbit sensor1=P1^0;
sbit sensor2=P1^1;
sbit sensor3=P1^2;
// sensors on street//
sbit load1=P2^0;
sbit load2=P2^1;
sbit load3=P2^2;
// street light connections//
void main()
{
load1=load2=load3=0;
sensor1=sensor2=sensor3=0; // optimal logic based on inpuy//
while(1)
{

	if(sensor1==1)
  {
	load1=1; // light 1 on
	load2=0;  // light2 off
	load3=0;  // light3 off
	}	
	if(sensor2==1)
	{
	load1=0; // light1 off
	load2=1;  // light2 on
	load3=0;  // light3 off
	}
	if(sensor3==1)
	{
	load1=0; // light1 off
	load2=0;  // light2 off
	load3=1;  // light3 on
	}	
	}
}			
