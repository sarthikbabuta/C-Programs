#include<stdio.h>
int main()
{
	int num,n,pos,arr[10],i,large;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	printf("enter the number do you want to enter");
	scanf("%d",&n);
	for(i=1;i<=num;i++)
	{
	 if(arr[i]<n)
	   {  
		pos=i;
		break;
 	   }  
    }
    num=num+1;
	for(i=num;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
    arr[pos]=n;
	for(i=1;i<=num;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0; 
}
