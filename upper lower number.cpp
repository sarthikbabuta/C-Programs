#include<stdio.h>
int main()
{
	char upper,lower,ch,number;
	printf("enter character\n");
	scanf("%c",&ch);
	while(ch!='*')
	{
		if(ch>='A'&&ch<='Z')
		upper++;
		else if(ch>='a'&&ch<='z')
		lower++;
		else if(ch>='0'&&ch<='9')
		number++;
		printf("enter character\n");
		scanf("%c",&ch);
	}
	printf("upper=%c",upper);
	printf("lower=%c",lower);
	printf("number=%c",number);
	return 0;
}
