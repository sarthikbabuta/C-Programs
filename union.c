#include<stdio.h>
#include<string.h>
union student 
{
	int x;
	double y;
}
n;
int main()
{
	n.x=5;
	printf("%d\n",n.x);
	n.y=10.0;
	printf("%lf\n",n.y);
	printf("%d",n.x);
	return 0;
}
