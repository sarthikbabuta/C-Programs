#include <stdio.h>
#include <string.h>
int main()
{
int pos;
char str[100],temp,i=0,j=0,ch[100];
printf("Enter the string");
gets(str);
printf("enter the pos");
scanf("%d",&pos);
for(i=0;i<pos;i++)
{
	ch[i]=str[i];
}
puts(ch);
return 0;
}
