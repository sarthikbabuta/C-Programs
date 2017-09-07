#include <stdio.h>
int main()
{
	char ch,a;
	printf("enter the character in upper case");
	scanf("%c",&ch);
	ch=ch+32;
	printf("the lower case word is%d\n",ch);
	printf("enter the character in lower case\n");
	scanf("%c",&a);
	a=a-32;
	printf("the upper case word is%d",a);
	return 0;
}
