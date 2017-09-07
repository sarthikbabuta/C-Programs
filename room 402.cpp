#include<stdio.h>
int main()
{
	int cgpa;
	char ch;
	printf("enter the name\n");
	scanf("%c",&ch);
	printf("enter the cgpa");
	scanf("%d",&cgpa);
	{
	if(ch=='a' && cgpa<=6.5 )
	{
		printf("your age is 20\n");
		printf("aram bhut jyada zaroori hai\n");
	}
	printf("you have entered wrong cgpa\n");
    }
	{
	if(ch=='h' && cgpa<=8.0)
	{
		printf("your age is 20\n");
		printf("hunnnnnnnnnnnn\n");
	}
	printf("you have entered wrong cgpa\n");
    }
	{	
	if(ch=='d' && cgpa<=8.5)
	{
		printf("your age is 19\n");
		printf("kuch bhi nahi ata\n");
	}
	printf("you have entered wrong cgpa of this no\n");
    } 
	{
	if(ch=='b' && cgpa<=9.5)
	{
		printf("your age is 19\n");
		printf("parhai bhut jyada zaroori hai\n");
	}
	printf("you have entered wrong cgpa of this person\n");
    }
	return 0;
}
