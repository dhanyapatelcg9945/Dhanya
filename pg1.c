#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("enter the number\n");
	scanf("%d", &num);
while(num>10)
{
sum=0;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		printf("%d",rem);
	}
	num=sum;
}
	printf("\n");
	printf("%d",num);
	return 0;

}
