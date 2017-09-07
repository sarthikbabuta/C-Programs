#include<stdio.h>
int lamda(int);
int main()
{
	int n,out;
	printf("enter the number");
	scanf("%d",&n);
	out=lamda(n);
	printf("%d",out);
	return 0;
}
int lamda(int num)
{
	if(num>1)
	return lamda(num/2)+1;
    else if(num==1)
    return 0;
}
