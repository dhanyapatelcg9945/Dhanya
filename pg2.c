#include<stdio.h>
int main()
{
unsigned int num, pos, res;
	printf("enter the bit\n");
	scanf("%x",&num);
	printf("enter the position to set\n");
	scanf("%x",&pos);
	res= num|(1<<pos);
	printf("0X%x",res);
	return 0;
}

		
