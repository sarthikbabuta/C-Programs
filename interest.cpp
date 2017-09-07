#include<stdio.h>
int main()
{
	float interest,principle,time,rate;
	printf("enter the principle,rate,time");
	scanf("%f%f%f",&principle,&rate,&time);
	interest=(principle*rate*time)/100;
	printf("interest is%f",interest);
	return 0;
	}
