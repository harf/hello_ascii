#include<stdio.h>
int main(void)
{	
	char topx = 0x40;
	char undx = 0x00;
	char *fifo,asc[5] = {0x0f, 0x0c, 0x0c, 0x05, 0x08};
	char *lifo,obj[5];
	char x,i,j;
	
	fifo = &asc[0];
	lifo = &obj[0];

	for(j = 0; j < sizeof(asc); j++){
		for(i = 1; i < 27; i++){
			x = (undx + i) | topx;
			if(x == (topx | *fifo)){
				*lifo = x;	
				lifo++;
				break;
			}
		}
	fifo++;
	}
	for(i = 0; i < sizeof(obj); i++){
		lifo--;
		printf("%c", *lifo);
	}
	printf("\n");
	return 0;
}
