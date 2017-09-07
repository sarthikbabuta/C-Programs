#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	float i,a,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		a=pow(i,i);
		sum=sum+a/i;
	}
	printf("sum is%f",sum);
	return 0;
}
