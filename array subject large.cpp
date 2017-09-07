#include<stdio.h>
int main()
{
	int arr[100][10],i,j,total=0,num,num1;
	printf("enter the number");
	scanf("%d",&num);
	scanf("%d",&num1);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num1;j++)
		{
		scanf("%d",&arr[i][j]);
	    }
	}
	for(j=0;j<num1;j++)
	{
		total=arr[i][0];
		for(i=0;i<num;i++)
		{
			if(arr[i][j]>total)
			{
				total=arr[i][j];
			}
		}
		printf("%d ",total);
	}
}
