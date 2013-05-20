#include<stdio.h>
int main(void)
{	
	char topx = 0x40;
	char undx = 0x00;
	char x,*lifo,Obj[6],i,moji;
	
	lifo = &Obj[0];
	for(i = 1; i < 27; i++){
		x = (undx + i) | topx;
		if(x == (topx + 8) || x == (topx + 5) || x == (topx + 12) || x == (topx + 12) || x == (topx + 15)){
				*lifo = x;
				lifo++;
		}
	}
	printf("%s\n", &Obj[0]);
	return 0;
}
