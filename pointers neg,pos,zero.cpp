#include<stdio.h>
int main()
{
	int num,*pnum;
	printf("enter the number");
	scanf("%d",&num);
	pnum=&num;
	if(*pnum>0)
	{
		printf("positive");
	}
	else if(*pnum<0)
	{
		printf("negative");
	}
	else if(*pnum=0)
	{
		printf("zero");
	}
	return 0;

}
