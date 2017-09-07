#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks\n");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Excellent");
	}
	else if(marks>=80)
	{
		printf("Very Good");
	}
	else if(marks>=70)
	{
		printf("Good");
	}
	else if(marks>=60)
	{
		printf("1st Divsion");
	}
	else if(marks>=50)
	{
		printf("2nd Division");
	}
	else if(marks>=40)
	{
		printf("3rd Divison");
	}
    else
	{
	printf("Fail");
    }
    return 0;
}
