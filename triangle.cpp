#include<graphics.h>
#define xa 40
void triangle()
{//for making a triangle
	int a;
	for(a=0;a<50*2;a++)
	{
	putpixel(480+a,60+a,BLACK);
	putpixel(480-a,60+a,BLACK);
	putpixel(380+a,160,BLACK);
	putpixel(578-a,160,BLACK);
	delay(1);
	}
	char c[50]="Triangle using pixel";
	moveto(425-xa,180);
	for(a=0;a<strlen(c);a++)
	{
		char b[3]={c[a],' '};
	outtext(b);
	delay(50);
	}
}

 
 //for deleting
void triangle_two()
{//for making a triangle
	int a;
	for(a=0;a<50*2;a++)
	{
	putpixel(480+a,60+a,YELLOW);
	putpixel(480-a,60+a,YELLOW);
	putpixel(380+a,160,YELLOW);
	putpixel(578-a,160,YELLOW);
	delay(2);
	}
	char c[50]="Triangle using pixel";
	moveto(425-xa,180);
	setcolor(YELLOW);
	for(a=0;a<strlen(c);a++)
	{
		char b[3]={c[a],' '};
	outtext(b);
	delay(55);
	}
}
