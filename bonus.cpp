#include<stdio.h>
int main()
{
	int salary,bonus;
	char gender;
	printf("enter the salary");
	scanf("%d",&salary);
	printf("enter the gender");
	scanf("%s",&gender);
	if(salary<=10000)
	{
		printf("you will be given extra bonus\n");
		bonus=salary*2/100;
		printf("your bonus is=%d\n",bonus);
	}
	else
	if(gender=='m' || gender=='M')
	{
		printf("you will be given bonus\n");
		bonus=salary*5/100;	
		printf("Your bonus is=%d\n",bonus);
	}
	else if(gender=='f' || gender=='F')
	{
		printf("you will be given bonus\n");
		bonus=salary*10/100;
		printf("Your bonus is=%d\n",bonus);
	}
	return 0;
}
