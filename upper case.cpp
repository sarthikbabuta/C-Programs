#include <stdio.h>
int main()
{
	char ch;
	printf("enter the character in lower case");
	scanf("%c",&ch);
	ch=ch-32;
	printf("the upper case word is%d",ch);
	return 0;
}
