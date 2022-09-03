#include<stdio.h>
int main()
{
 int array[5]={0,1,2,3,4};
 int *ptr[5]={array,array+1,array+2,array+3,array+4};
	for(int i=0;i<5;i++)
	{
		printf("%d %u 0X%x 0X%x", array[i],ptr[i],*ptr[i],(*(ptr+i)));
	}
}
