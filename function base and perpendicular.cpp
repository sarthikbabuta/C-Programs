#include<stdio.h>
#include<math.h>
int hypo(int,int);
int main()
{
	int num,h,p,b;
	printf("enter the base");
	scanf("%d",&b);
	printf("enter the perpendicular");
	scanf("%d",&p);
	h=hypo(b,p);
	printf("hypotenuse is:%d",h);
	return 0;
}
int hypo(int a,int d)
{
	int c;
	c=sqrt(a*a+d*d);
	return c;
}
