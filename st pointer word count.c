#include<stdio.h>
int main()
{
	char ch[10],*pch,count=0;
	printf("enter the string");
	gets(ch);
	pch=&ch;
	while(*pch!='\0')
	{
		if(*pch==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
