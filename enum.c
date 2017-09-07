#include<stdio.h>
enum colors{red,blue,black,green,yellow,purple,white};
int main()
{
	enum colors c;
	int i=0;
	for(i=0;i<7;i++)
	{
		c=i;
		switch(c)
		{
			case red: printf("red color\n");
			break;
			case blue: printf("blue color\n");
			break;
			case black: printf("black color\n");
			break;
			case green: printf("green color\n");
			break;
			case yellow: printf("yellow color\n");
			break;
			case purple: printf("purple color\n");
			break;
			case white: printf("white color");
			break;
		}
	}
	return 0;
}
