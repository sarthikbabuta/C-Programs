#include<stdio.h>
float avg(float);
int main()
{
	float out,num;
	printf("enter the number");
	scanf("%f",&num);
	out=avg(num);
	printf("%.2f",out);
	return 0;
}
float avg(float n)
{
	float sum=0,avg=0;
	int i;
	for(i=1;i<=n;i++)
	{
	sum=sum+i;
	}
	avg=sum/n;
	return avg;
}
