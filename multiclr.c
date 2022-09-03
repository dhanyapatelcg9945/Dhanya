#include<stdio.h>
int main()
{
unsigned int n,num, pos,val, res;
	printf("enter the bit\n");
	scanf("%x",&num);
	printf("enter the number of bits\n");
	scanf("%x",&n);
	printf("enter the position to set\n");
	scanf("%x",&pos);
	val=((1<<n)-1);
	res= num&(~(val<<pos));
	printf("0X%x",res);
	return 0;
}

		
