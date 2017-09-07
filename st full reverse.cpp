#include <stdio.h>
#include <string.h>
int main()
{
char str[100],temp,i=0,j=0;
printf("Enter the string");
gets(str);
j=strlen(str)-1;
for(i=0;i<j;i++)
{
temp=str[j];
str[j]=str[i];
str[i]=temp;
j--;
}
printf("%s",str);
return 0;
}
