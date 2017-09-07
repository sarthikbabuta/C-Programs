#include<stdio.h>
int main()
{
	char ch,*pch;
	printf("enter the character");
	scanf("%c",&ch);
	pch=&ch;
	if((*pch>='A' && *pch<='Z')||(*pch>='a'&&*pch<='z'))
	printf("Charcter=%c Ascii=%d",*pch,*pch);
	return 0;
}
