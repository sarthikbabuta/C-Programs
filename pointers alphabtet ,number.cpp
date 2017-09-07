#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,*pch;
	printf("enter the number or alpahabet\n");
	scanf("%c",&ch);
	pch=&ch;
	if(isalpha(*pch)>0)
	{
		printf("you have entered alphabet\n");
		if(*pch>='A'&&*pch<='Z')
		{
			printf("Upper case");
		}
		else if(*pch>='a' && *pch<='z')
		{
			printf("Lower case");
		}
	}
	else if(isdigit(*pch)>0)
	{
		printf("you have entered number");
	}
	return 0;
}
