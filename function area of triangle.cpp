#include<stdio.h>
int area(int,int);
int main()
{
	int a,b,out;
	printf("enter the base and height");
	scanf("%d%d",&a,&b);
	out=area(a,b);
	printf("%d",out);
	return 0;
}
int area(int b,int h)
{
    int a;
	a=0.5*(b*h);
	return a;
}
