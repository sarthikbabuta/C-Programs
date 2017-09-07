#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=16 && age<18)
	{
		printf("Learner License");
	}
	else if(age>=18)
	{
		printf("Driving License");
	}
	else
	{
		printf("Not Valid");
	}
	
	return 0;
}

