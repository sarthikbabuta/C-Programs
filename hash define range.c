#include<stdio.h>
#define pr printf("enter the number\n");
#define pr1 printf("found\n");
#define pr2 printf("not found");
#define and &&
#define range(a) a>100 and a<200
int main()
{
	int result,a;
	pr
	scanf("%d",&a);
	if(range(a))
	{
	pr1	
	}
	else
	{
		pr2
	}
	return 0;
}
