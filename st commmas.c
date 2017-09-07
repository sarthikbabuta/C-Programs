#include<stdio.h>
#include<strings.h>
int main()
{
char str[10],copy_str[10];
int i=0;
printf("Enter the text");
gets(str);
while(str[i]!='\0')
{
if(str[i]==',')
copy_str[i]=';';
else
copy_str[i]=str[i];
i++;
}
for(i=0;copy_str[i]!='\0';i++)
{
printf("%c",copy_str[i]);
}
return 0;
}
