#include<stdio.h>
int main()
{
	int num,arr[50],n,flag=0,pos,i;
	printf("enter the size");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be search");
	scanf("%d",&num);
	for(i=1;i<=n;i++)
	{
		if(arr[i]==num)
		{
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("element found at%d",pos);
	}
	else 
	{
		printf("element not found");
	}
	return 0;
}
