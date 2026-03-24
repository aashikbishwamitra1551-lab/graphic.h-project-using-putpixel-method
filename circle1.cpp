#include<graphics.h>
#include<math.h>
#define xa 20
void circle2()
{	//for making a circle
	int a,x,y;
	double b;
	for(b=0;b<6.285714285714286;b+=0.001)
	{
		x=150+sin(b)*75;
		y=350+cos(b)*75;
		putpixel(x,y,YELLOW);
		delay(0.5);	
	}
	char d[40]="circle using pixel";
	moveto(80-xa,430);
	//setbkcolor(WHITE);
	moveto(80-xa,430);
	setcolor(YELLOW);
	for(a=0;a<strlen(d);a++)
	{
		char b[3]={d[a],' '};
	outtext(b);
	delay(300);
	}
}
