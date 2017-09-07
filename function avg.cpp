#include<stdio.h>
int avg(int);
int main()
{
	int out,num;
	printf("enter the number");
	scanf("%d",&num);
	out=avg(num);
	printf("%d",out);
	return 0;
}
int avg(int n)
{
	int sum=0,count,i;
	float avg;
	while(n>0)
	{
		for(i=1;i<=n;i++)
	{
	sum=sum+n;
	count++;
	avg=sum/count;
    }
    printf("enter the num");
	scanf("%d",&n);
	}
	return avg;
}
