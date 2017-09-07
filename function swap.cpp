#include<stdio.h>
void swap(int *,int *);
int main()
{
	int x,y;
	printf("enter the number");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d\t%d",*a,*b);
}
