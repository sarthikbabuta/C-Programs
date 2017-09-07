#include<stdio.h>
int main()
{
	int aggregate,aggregate1,aggregate2,aggregate3,aggregate4;
	printf("enter the Aggregate\n");
	scanf("%d%d%d%d",&aggregate1,&aggregate2,&aggregate3,&aggregate4);
	aggregate=(aggregate1+aggregate2+aggregate3+aggregate4)*100/400;
	printf("%d",aggregate);
	printf("\n");
    if(aggregate>=90)
	{
		printf("A+");
	}
	else if(aggregate>=80)
	{
		printf("A");
	}
	else if(aggregate>=70)
	{
		printf("B+");
	}
	else if(aggregate>=60)
	{
		printf("B");
	}
	else if(aggregate>=50)
	{
		printf("C+");
	}
	else if(aggregate>=40)
	{
		printf("C");
	}
    else
	{
	printf("F");
    }
    return 0;
}
