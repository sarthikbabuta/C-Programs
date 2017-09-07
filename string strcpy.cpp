#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hey there";
	char str2[100];
	strcpy(str2,str1);
	puts(str2);
	return 0;
}
