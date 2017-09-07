#include<stdio.h>
int main()
{
	int num,rem,n,count=0,sum=0,i;
	printf("enter the num");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		rem=num%10;
		num=num/10;
		if(rem%2==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
