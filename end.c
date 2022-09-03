#include<stdio.h>
int main()
{
	unsigned int x=0X12345678;
	char *ch ;
	ch=&x;
	if(*ch==0x78)
		printf("\nlittle endian\n");
	else
	printf("\n big endian\n");
	printf("%d\n%d",sizeof(ch),sizeof(*ch));
	return 0;
}
