#include "PutHeader.h"
#include<graphics.h>
#include<math.h>
main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,*"");
	setcolor(BLACK);
	//functions to draw
	drawline();
    rectangle_one();
	triangle();
	circle1();
	polygon();
	
	//deleting function
   rectangle_two();
	triangle_two();
	circle2();
	polygon1();
	drawline_One();
	
	theend();
	
	getch();
}
