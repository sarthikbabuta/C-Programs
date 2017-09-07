#include<stdio.h>
#include<limits.h>
int main()
{
	int *arr,n=0,i=0;
	printf("enter the number");
	scanf("%d",&n);
	arr=(int *) malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("memory not allocated");
	return 0;
	}
}
