#include<stdio.h>
int main()
{
	int num,arr[10],i,second,loc,pos,large;
	printf("Enter the numbers");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=1;i<=num;i++)
	{	if(arr[i]>large)
		{
			large=arr[i];
			pos=i;
		}
	}
	second=arr[0];
	for(i=1;i<=num;i++)
	{
		if(arr[i]>second&&large>arr[i])
		{
			second=arr[i];
			loc=i;
		}
	}
	printf("value=%d\npostion=%d",second,loc);
	return 0;
}
