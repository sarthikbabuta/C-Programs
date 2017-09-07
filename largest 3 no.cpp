#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("enter the 3 no");
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?(a>c?b:c):(b>c?a:c);
	printf("%d",d);
	getch();
	return 0;
}
