#include<stdio.h>
int main()
{   int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=16 && age<18)
	{
    printf("Learner License");
		
	}
	if(age>=18)
	{
	printf("Driving License");
    }
    if(age<16)
    {
	printf("Not Eligible");
    }
    return 0;
}
