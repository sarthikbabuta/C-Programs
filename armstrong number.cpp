#include<stdio.h>
#include<math.h>
int main()
{
	int rem,num,sum,temp;
	printf("enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+pow(rem,3);
	}
	if(sum==temp)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
	return 0;
}
