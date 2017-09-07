#include<stdio.h>
#include<math.h>
int intrest(int,int,int);
int main()
{
	int a,b,c,out;
	printf("enter the a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	out=intrest(a,b,c);
	printf("%d",out);
	return 0;
}
int intrest(int p,int r,int t)
{
	int d,amt,total;
	d=(1+r/100);
	amt=pow(d,t);
	total=amt-p;
	return total;
}
