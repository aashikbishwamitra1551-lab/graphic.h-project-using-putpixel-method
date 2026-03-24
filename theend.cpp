#include <graphics.h>
void theend()
{
	 setcolor(RED);
	 settextstyle(TRIPLEX_FONT, 0, 38);
	 char b[10]="THE END";
	 moveto(130,200);
	 for(int a=0;a<strlen(b);a++)
	 {
	 char c[3]={b[a],' '};
	outtext(c);
	delay(50);
	}
}
