#include<stdio.h>
#include<string.h>
struct student 
{
	int rollno;
	char name[80];
};
void display(int n,char str[])
{
	printf("\n %d \t %s",n,str);
}
void show(struct student b)
{
	printf("\n %d \t %s",b.rollno,b.name);
}
int main()
{
struct student s;
s.rollno=1234;
s.name="abcd";
display(s.rollno,s.name);
show(s);
return 0;	
}
