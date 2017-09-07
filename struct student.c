#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[100];
	int date;
	int month;
	int year;
	char dept[100];
};
int main()
{
	int i=0;
	struct student s[100];
	printf("enter the detail:-\n");
	{
		printf("enter the rollno:-\n");
		scanf("%d",&s[i].rollno);
		printf("enter the name:-\n");
		scanf("%s",&s[i].name);
		printf("enter the date\n");
		scanf("%d",&s[i].date);
		printf("enter the month\n");
		scanf("%d",&s[i].month);
		printf("enter the year\n");
		scanf("%d",&s[i].year);
		printf("enter the dept\n");
		scanf("%s",&s[i].dept);
	}
	{
		printf("%d\n",s[i].rollno);
		printf("%s\n",s[i].name);
	    printf("%d %d %d\n",s[i].date,s[i].month,s[i].year);
	    printf("%s",s[i].dept);
	}
}
