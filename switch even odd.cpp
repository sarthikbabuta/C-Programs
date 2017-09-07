#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0: printf("even number");
		break;
		default: printf("odd number");
		break;
	}
	return 0;
}
