#include<stdio.h>
int main()
{
	int arr[100],beg,end,mid,i,num,n;
	printf("enter the size");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("enter the number");
	scanf("%d",&arr[i]);
    }
	printf("enter the element to be searched");
	scanf("%d",&num);
	beg=1;
	end=n;
	mid=(beg+end)/2;
	while(beg<end&&arr[mid]!=num)
	{
		if(arr[mid]>num)
		{
		   end=mid-1;
	    }
		else if(arr[mid]<num)
		{
		   beg=mid+1;
	    }
	    mid=(beg+end)/2;
	}
	if(arr[mid]==num)
	{
		printf("element found at %d",mid);
	}
	else 
	{
		printf("Not Found");
	}
	return 0;
}
