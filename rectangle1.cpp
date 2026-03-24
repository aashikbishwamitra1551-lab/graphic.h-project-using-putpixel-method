#include<graphics.h>
#define xa 40
void rectangle2()
{	
int a;
//for making a rectangle
	for(a=0;a<120;a++)
	{
	putpixel(100,60+a,YELLOW);/*for left vetical line*/ 
	putpixel(220,60+a,YELLOW);/*for right vertical line*/
	putpixel(100+a,60,YELLOW);/*for top horizontal line*/
	putpixel(100+a,180,YELLOW);/*for down horizontal line*/
	delay(1);
	}
	char b[50]="Rectangle using pixel";
	moveto(90-xa,200);
	setcolor(YELLOW);
	for(a=0;a<strlen(b);a++)
	{
		char c[3]={b[a],' '};
	outtext(c);
	delay(300);
	}
}
