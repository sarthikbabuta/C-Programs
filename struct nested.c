#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[100];
	char dept[100];
	struct dob ;
};
struct dob
{
	int date;
	int month;
	int year;
};
int main()
{
	int i=0;
	struct student s[100];
	struct dob d[100];
	printf("enter the detail:-\n");
	{
		printf("enter the rollno:-\n");
		scanf("%d",&s[i].rollno);
		printf("enter the name:-\n");
		scanf("%s",&s[i].name);
		printf("enter the date\n");
		scanf("%d",&s[i].d.date);
		printf("enter the month\n");
		scanf("%d",&s[i].d.month);
		printf("enter the year\n");
		scanf("%d",&s[i].d.year);
		printf("enter the dept\n");
		scanf("%s",&s[i].dept);
	}
	{
		printf("%d\n",s[i].rollno);
		printf("%s\n",s[i].name);
	    printf("%d %d %d\n",s[i].d.date,s[i].d.month,s[i].d.year);
	    printf("%s",s[i].dept);
	}
}
