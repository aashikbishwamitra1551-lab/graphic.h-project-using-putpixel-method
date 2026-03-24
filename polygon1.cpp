#include<graphics.h>
#define xa 20
void polygon1()
{
	int a;
//for making a polygon
	for(a=0;a<50;a++)
	{
		putpixel(450+a,300+a,YELLOW);//for right roof
		putpixel(450-a,300+a,YELLOW);//for left roof
		putpixel(400,350+a,YELLOW);//for left vertical line from left roof end
		putpixel(500,350+a,YELLOW);//for right vertical line from right roof end
		putpixel(500-a,400,YELLOW);//for horizontal line from right vertical line end
		putpixel(400+a+1,400,YELLOW);//for horizontal line from left vertical line end
		putpixel(500-a-1,350,YELLOW);//for horizontal line from right roof end
		putpixel(400+a,350,YELLOW);//for horizontal line from left roof end
	delay(1);
	}
	char e[40]="polygon using pixel";
	moveto(384-xa,410);
	setcolor(YELLOW);
	for(a=0;a<strlen(e);a++)
	{
		char b[3]={e[a],' '};
	outtext(b);
	delay(300);
	}
}
