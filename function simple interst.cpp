#include<stdio.h>
int intrest(int,int,int);
int main()
{
	int a;
	float b,c,out;
	printf("enter the a,b,c");
	scanf("%d%f%f",&a,&b,&c);
	out=intrest(a,b,c);
	printf("%f",out);
	return 0;
}
int intrest(int p,int r,int t)
{
	float amt;
	amt=p*r*t/100;
	return amt;
}
