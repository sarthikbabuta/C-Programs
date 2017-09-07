#include<stdio.h>
int main()
{
	int radius,*pradius;
	float area,*parea;
	printf("enter the radius");
	scanf("%d",&radius);
	pradius=&radius;
	area=3.14* *pradius* *pradius;
	parea=&area;
	printf("radius=%d area=%.2f",*pradius,*parea);
	return 0;
}
