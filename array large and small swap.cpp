#include<stdio.h>
int main()
{
	int i,arr[10],large,loc,small,pos,num,temp;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	small=arr[1];
	large=arr[1];
	for(i=1;i<=num;i++)
	{
    if(arr[i]<small)
	  {   
		small=arr[i];
		pos=i;
	  }
	  else if(arr[i]>large)
	  {
	  	large=arr[i];
	  	loc=i;
	  }
    }
    temp=arr[loc];
    arr[loc]=arr[pos];
    arr[pos]=temp;
	{
		printf("smallno=%d pos%d\nlargeno=%d position%d",small,pos,large,loc);
	}
	for(i=1;i<=num;i++)
	{
		printf("the new array arr[%d]=%d",i,arr[i]);
	}
	return 0;
}
