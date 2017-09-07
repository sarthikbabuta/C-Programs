#include<stdio.h>
int main()
{
    int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("You can make Voter Id Card");
	}
	else
	{
		printf("Not Elegible");
	}
	return 0;
}
