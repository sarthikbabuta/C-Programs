#include<stdio.h>
int main()
{
	int a[]={10,11};
	int * const ptr=a;
	*ptr=11;
	printf("value at ptr is%d",*ptr);
	printf("address pointed by ptr%u\n",(unsigned int *ptr)ptr);
	ptr++;
	printf("address pointed by ptr%u\n",(unsigned int *ptr)ptr);
	return 0;
}
