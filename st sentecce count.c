#include<stdio.h>
int main()
{
char str[10],i,count=0;
printf("Enter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '&&str[i+1]!=' ')
count++;
}
printf("count=%d",count+1);
return 0;
}
