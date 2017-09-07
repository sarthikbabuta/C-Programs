#include<stdio.h>
int main()
{
	int num,n,pos,arr[10],i,j;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be deleted");
	scanf("%d",&n);
	for(i=1;i<=num;i++)
	{
	 if(arr[i]==n)
	   {  
		for(j=i;j<=num-1;j++)
		{
			arr[j]=arr[j+1];
		}
		j=0;
	   }
    }
	for(i=1;i<=num-1;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0; 
}
