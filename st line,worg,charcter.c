#include<stdio.h>
int main()
{
char str[10];
int i=0,word_count=0,line_count=0,char_count=0;
printf("Enter the name");
scanf("%c",&str[i]);
while(str[i]!='*')
{
i++;
scanf("%c",&str[i]);
}
str[i]='\0';
i=0;
while(str[i]!='\0')
{
if(str[i]=='\n')
line_count++;
if(str[i]==' '&&str[i+1]!=' ')
word_count++;
char_count++;
i++;
}
printf("words count=%d\n",word_count);
printf("lines count=%d\n",line_count);
printf("characters count=%d",char_count);
return 0;
}
