#include<stdio.h>
int main()
{
	int sno,qty;
	float price,amount;
	char item='pen';
	printf("enter the sno\n");
	scanf("%d",&sno);
	printf("enter the qty");
	scanf("%d",&qty);
	printf("enter the price\n");
	scanf("%f",&price);
	amount=qty*price;
	printf("%d%c%",sno,item,qty,price,amount);
	return 0;
}
