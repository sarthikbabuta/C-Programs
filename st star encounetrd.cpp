#include<stdio.h>
#include<string.h>
int main()
{
char str[10],i=0;
printf("Enter the name");
scanf("%c",&str[i]);
while(str[i]!='*')
{
i++;
scanf("%c",&str[i]);
}
printf("count=%d",i-1);
return 0;
}
