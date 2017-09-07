#include<stdio.h>
#include<conio.h>
int table(int,int);
int main()
{

int n,i;

printf("Enter any num: ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d\n",table(n,i));
}
getch();
}
int table(int n,int i)
{
if(i==1)
{
return(n);
}
else
{
return(table(n,i-1)+n);
}
}
