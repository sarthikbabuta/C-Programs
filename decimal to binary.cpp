#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,binary=0,rem;
	printf("enter the decimal num");
	scanf("%d",&num); 
	while(num!=0)
	{
		rem=num%2;
		binary=binary+rem*pow(10,i);
		num=num/2;
		i++;
	}
	printf("%d",binary);
	return 0;
}
