#include<stdio.h>
#include<math.h>
int main()
{
	int i,arr[10],num,flag=0,j;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		for(j=i+1;j<=num;j++)
		{
			if(arr[i]==arr[j]&&i!=j)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("duplicate number");
	}
	else 
	{
		printf("Duplicate number");
	}
	return 0;	
}
