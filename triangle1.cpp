#include<graphics.h>
#define xa 40
void triangle1()
{//for making a triangle
	int a;
	for(a=0;a<50*2;a++)
	{
	putpixel(480+a,60+a,YELLOW);
	putpixel(480-a,60+a,YELLOW);
	putpixel(380+a,160,YELLOW);
	putpixel(578-a,160,YELLOW);
	delay(1);
	}
	char c[50]="Triangle using pixel";
	moveto(425-xa,180);
	setcolor(YELLOW);
	for(a=0;a<strlen(c);a++)
	{
		char b[3]={c[a],' '};
	outtext(b);
	delay(300);
	}
}
