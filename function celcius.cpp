#include<stdio.h>
int temp(int);
int main()
{
	int celsius,out;
	printf("enter the celsius");
	scanf("%d",&celsius);
	out=temp(celsius);
	printf("%d",out);
	return 0;
}
int temp(int c)
{
	int f;
	f=1.8*c+32;
	return f;
}
