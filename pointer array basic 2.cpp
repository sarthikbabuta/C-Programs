#include<stdio.h>
int main()
{
	int arr[10]={4,5,8,10,11};
	int i,*ptr;
	ptr=arr;
	while(i<5)
	{
		printf("%d ",*ptr);
		ptr++;
		i++;
	}
	return 0;
}
