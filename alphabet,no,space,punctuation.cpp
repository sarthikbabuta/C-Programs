#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter the alphabet or number or space or punctuation\n");
	scanf("%c",&ch);
	if(isalpha(ch)>0)
	{
		printf("You have entered Alphabet");
	}
	else if(isdigit(ch)>0)
	{
		printf("You have entered Digit");
	}
	else if(ispunct(ch)>0)
	{
	printf("You have entered Punctuation");
    }
    else if(isspace(ch)>0)
    {
    	printf("You have entered Space");
	}
	return 0;
}
