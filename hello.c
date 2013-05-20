#include<stdio.h>
int main(void)
{	
	char topx = 0x40;
	char undx = 0x00;
	char *fifo,asc[6] = {0x0f, 0x0c, 0x0c, 0x05, 0x08};
	char *lifo,obj[6];
	char x,i;
	
	lifo = &obj[0];
	fifo = &asc[0];

	while(*fifo != '\0'){
		for(i = 1; i < 27; i++){
			x = (undx + i) | topx;
			if(x == (topx | *fifo)){
				*lifo = x;	
				lifo++;
				fifo++;
			}
		}
	}
	for(i = 0; i < sizeof(obj); i++){
		printf("%c", *lifo);
		lifo--;
	}
	printf("\n");
	return 0;
}
