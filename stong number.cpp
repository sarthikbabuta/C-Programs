#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,rem,sum=0,fact,temp;
	printf("enter the nnumber");
	scanf("%d",&num);
	temp=num;
     while(num!=0)
     {
     	rem=num%10;
     	num=num/10;
     	fact=1;
     	for(i=1;i<=rem;i++)
     	{
     		fact=fact*i;
		}
		 sum=sum+fact;
	 }
	 if(sum==temp)
	 {
	 	printf("strong");
	 }
	 else
	 {
	 	printf("not strong");
	 }
	return 0;
}
