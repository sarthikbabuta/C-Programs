#include<stdio.h>
int main()
{
	int square,cube,num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		square=i*i;
		cube=i*i*i;
		printf("square=%d\tcube=%d\n",square,cube);
	}
	return 0;
}  
