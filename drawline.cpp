#include<graphics.h>
void drawline()
{
int a;
setbkcolor(YELLOW);//This is to make the whole background yellow
clearviewport();//must use this or cleardevice function
//This is for drawing line in the graph
for(a=0;a<=359;a+=1)
	{
	putpixel(320+a,240,BLACK);
	if(a<240)
	putpixel(320,240+a,BLACK);
	if(a<321)
	putpixel(320-a,240,BLACK);
	if(a<241)
	putpixel(320,240-a,BLACK);
delay(1);
	}
}

//for deleting
void drawline_One()
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
delay(2);
	}
}
