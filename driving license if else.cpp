#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=16)
	{
		if (age<18)
		{
			printf("Learner License");
		}
		else
		printf("Driving License");
	}
	else
	{	
	printf("Not Eligible");
	}
	return 0;
}
