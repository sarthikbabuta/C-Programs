#include<stdio.h>
int main()
{
	int a[5],i,sum=0,avg=0;
	for(i=1;i<=5;i++)
	{
		printf("enter the number");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		avg=sum/5;
	}
	printf("%d %d",sum,avg);
	return 0;	
}
