#include<stdio.h>
int main()
{
	void *vp;
	int a=20;
	char ch='x';
	float fp=9.4;

	vp=&a;
	printf(" %d  %d ",a,*(int *)vp);
        vp=&ch;
        printf(" %d  %d ",ch,*(char *)vp);
        vp=&fp;
        printf(" %f  %f ",fp,*(float *)vp);
}

