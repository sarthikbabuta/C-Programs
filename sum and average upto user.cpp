#include<stdio.h>
int main()
{
	int sum=0,num,count=0;
	float avg=0;
	printf("enter the num");
	scanf("%d",&num);
	while(num!=0)
	{
		count++;
		sum=sum+num;
		printf("enter the num");
		scanf("%d",&num);
    }
	avg=sum/count;
	printf("sum=%d,avg=%d",sum,avg);
	return 0;
}
