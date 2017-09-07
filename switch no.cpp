#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("it is case 1");
        break; 
		case 2:printf("it is case 2");
	    break;
		case 3:printf("it is case 3");
		break;
		default:printf("not valid");
	}
	return 0;
}
