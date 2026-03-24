#include<graphics.h>
void drawline12()
{
int a;
for(a=0;a<=359;a+=1)
	{
	putpixel(320+a,240,YELLOW);
	if(a<240)
	putpixel(320,240+a,YELLOW);
	if(a<321)
	putpixel(320-a,240,YELLOW);
	if(a<241)
	putpixel(320,240-a,YELLOW);
delay(1);
	}
}
