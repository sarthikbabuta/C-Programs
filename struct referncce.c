
#include<stdio.h>
#include<string.h>
struct student 
{
	int rollno;
	char name[80];
};
void display(struct student *ptr)
{
	printf("\n %d \t %s",ptr->rollno,ptr->name);
}
int main()
{
	struct student s;
	printf("enter rollno");
	scanf("%d",&s.rollno);
	printf("enter name");
    scanf("%s",&s.name);
    display(&s);
    return 0;
}
