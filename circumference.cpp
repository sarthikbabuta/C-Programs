#include<stdio.h>
#include<math.h>
int main()
{
	float pie=3.14,area,circumference,radius;
	printf("enter the value of radius");
	scanf("%f",&radius);
	circumference=2*pie*radius;
	area=pie*radius*radius;
	printf("circumference=%f",circumference);
	printf("area=%f",area);
	return 0;
}
