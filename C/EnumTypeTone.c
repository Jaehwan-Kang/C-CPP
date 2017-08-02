#include <stdio.h>
//#include "stdafx.h"
#include "stdlib.h"

typedef enum syllable
{
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void Sound(Syllable sy)
{
	switch(sy)
	{
		case Do:
			puts("도"); return;
		case Re:
			puts("레"); return;
		case Mi:
			puts("미"); return;
		case Fa:
			puts("파"); return;
		case So:
			puts("솔"); return;			
		case La:
			puts("라"); return;
		case Ti:
			puts("시"); return;
	}
	puts("다함께 노래 부르세~");
}

int main(void)
{
	Syllable tone;
	for(tone=0; tone<=Ti; tone+=1)
		Sound(tone);
	return 0;
}