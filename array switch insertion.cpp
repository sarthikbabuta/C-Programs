#include<stdio.h>
int main()
{
	int n;
	printf("enter 1 element at first");
	printf("enter 2 element at last");
	printf("enter 3 element at any postion");
	printf("enter the number");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	#include<stdio.h>
    int main()
    {
	int num,arr[10],i;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	num=num+1;
	for(i=num;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	printf("enter the 1st element do u want to print");
	scanf("%d",&arr[1]);
	for(i=1;i<=num;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
    break;
    case 2:
	#include<stdio.h>
    int main()
    {
	int num,arr[20],i;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	printf("enter the number");
	scanf("%d",&arr[i]);
	}
	num=num+1;
	printf("enter the last element");
	scanf("%d",&arr[num]);
	for(i=1;i<=num;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
break;
case 3: 
#include<stdio.h>
int main()
{
	int num,arr[10],i,pos;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	num=num+1;
	printf("enter the postion");
	scanf("%d",&pos);
	for(i=num;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	printf("enter the element do you want to enter");
	scanf("%d",&arr[pos]);
	for(i=1;i<=num;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
    }
   default : printf("sorry u want enter wrong number");
}
return 0;
}
