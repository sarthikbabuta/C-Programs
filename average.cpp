#include<stdio.h>
int main()
{
	float x1,x2,x3,x4,x5,average;
	printf("enter the value of x1,x2,x3,x4,x5");\
	scanf("%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5);
	average=(x1+x2+x3+x4+x5)/5;
	printf("average=%f",average);
	return 0;
}
