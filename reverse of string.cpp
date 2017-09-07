#include<stdio.h>
int main()
{
	char ch[10],reverse=0;
	printf("enter the name");
	scanf("%s",&ch);
	reverse=reverse*10+ch%10;
	ch=ch/10;
	printf("%s",reverse);
	return 0;
}
