#include<stdio.h>
int main()
{
	int a,b,c,large,*pa,*pb,*pc,*plarge;
	printf("enter the 3 numbeer");
	scanf("%d%d%d",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	plarge=&large;
	large=*pa>*pb?(*pa>*pc?*pa:*pc):(*pb>*pc?*pb:*pc);
	printf("\nlarge=%d",*plarge);
	return 0;
}
