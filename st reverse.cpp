#include<stdio.h>
int main()
{
	char ch[100],i,j;
	printf("enter the string");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",ch[j]);
	}
}
