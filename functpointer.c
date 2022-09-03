#include<stdio.h>
void(*funcp)(void);

void display(void)
{
	printf("Hello world");
}

int main()
{
	int a=3,*p;
	p=&a;
	display();
        funcp=&display;
        printf("%d%d",a,*p);

}

