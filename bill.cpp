#include<stdio.h>
int main()
{
	int sno,qty1,qty2,qty3,qty4;
	float price,price1,price2,price3,price4,amt1,amt2,amt3,amt4,amt;
	printf("enter the quantity\n");
	scanf("%d%d%d%d",&qty1,&qty2,&qty3,&qty4);
	printf("enter the price\n");
	scanf("%f%f%f%f",&price1,&price2,&price3,&price4);
	amt1=qty1*price1;
	amt2=qty2*price2;
	amt3=qty3*price3;
	amt4=qty4*price4;
	amt=amt1+amt2+amt3+amt4;
	printf("**********BILL***********\n");
	printf("sno\titem\tqty\tprice\t\tamount\n");
	printf("1\tpen\t%d\t%f\t%f",qty1,price1,amt1);
	printf("\n");
	printf("2\tmarker\t%d\t%f\t%f",qty2,price2,amt2);
	printf("\n");
	printf("3\tpencil\t%d\t%f\t%f",qty3,price3,amt3);
	printf("\n");
	printf("4\teraser\t%d\t%f\t%f",qty4,price4,amt4);
	printf("\ntotal\t\t\t\t%f",amt);
	return 0;
}
