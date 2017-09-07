#include<stdio.h>
int main()
{
char str[10],copy_str[10];
int i=0,j=0,m,n;
printf("Enter the word");
gets(str);
printf("Enter the position from which to start");
scanf("%d",&m);
printf("Enter the number of characters to be copied");
scanf("%d",&n);
for(i=m;str[i]!='\0'&&i<n;i++)
{
copy_str[j]=str[i];
j++;
}
copy_str[j]='\0';
puts(copy_str);
return 0;
}
