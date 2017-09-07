#include<stdio.h>
int main()
{   char ch;
	printf("enter the alphabet");
	scanf("%c",&ch);
	if(ch>=65&&ch<=91)
	  {	
	  ch=ch+32;
		printf("lower case letter will be:-%c",ch);
	  }  
	return 0;
}
