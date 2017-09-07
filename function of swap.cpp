#include<stdio.h>
#include<math.h>
int swap(int,int);
int main()
{
	int c,a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	c=swap(a,b);
    printf("%d",c);
    return 0;
}
int swap(int d,int e)
{
	int temp;
	temp=d;
	d=e;
	e=temp;
	printf("%d%d",d,e);
}
