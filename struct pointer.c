#include<stdio.h>
#include<string.h>
struct student 
{
	int rollno;
	char name[80];
}
s;
int main()
{
struct student *ptr;
ptr=&s;
printf("enter rollno");
scanf("%d",&s.rollno);
printf("enter name");
scanf("%s",&s.name);
printf("%d %s\n",ptr->rollno,ptr->name);
return 0;	
}
