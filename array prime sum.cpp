#include<stdio.h>
int main()
{
	int num,arr[100],j,sum=0,pos,n,i,flag=0;
	printf("eneter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(arr[i]%j==0)
			{
				flag=1;
				break;
			}	
		}
		if(flag==0&&arr[i]!=1)
		{
			sum=sum+arr[i];
		}
	}

	printf("%d",sum);
}
