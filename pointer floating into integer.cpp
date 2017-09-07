#include<stdio.h>
int main()
{
	float a,*pa;
     int  b,*pb;
	printf("enter the number");
	scanf("%f",&a);
	pa=&a;
	pb=&b;
	*pb=*pa;
	printf("%d",*pb);
	return 0;
}
