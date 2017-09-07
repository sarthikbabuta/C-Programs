#include<stdio.h>
#include<string.h>
int read(int *,int);
int display(int*,int);
int total(int*,int,int*,int*);
int main()
{
	int arr[20],num,i,pos,small;
	printf("enter number");
	scanf("%d",&num);
	read(arr,num);
	display(arr,num);
	total(arr,num,&small,&pos);
	printf("%d %d",small,pos);
}
int read(int *arr,int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int display(int *arr,int num)
{
	int i;
	for(i=0;i<num;i++)
	{
	   printf("%d",arr[i]);
	}
}
int total(int *arr,int num,int *small,int *pos)
{
	int i;
	for(i=0;i<num;i++)
	{
		if(*(arr+i)< *small)
		{
			*small= *(arr+i);
			*pos=i;
		}
	}
}
