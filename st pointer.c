#include<stdio.h>
int main()
{
	char ch[10],*pch;
	printf("enter the string");
	gets(ch);
	pch=&ch;
	while(*pch!='\0')
	{
		printf("%c",*pch);
		pch++;
	}
}
