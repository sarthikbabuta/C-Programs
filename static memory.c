//normal with static memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i;
	printf("enter the number");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("memory allocated");
	}	
}
