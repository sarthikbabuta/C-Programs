#include<stdio.h>
int main()
{
	int arr[10]={4,5,8,10,11},i;
	for(i=1;i<=5;i++)
	{
		printf("%d ",*(arr+i));
	}
	return 0;
}
