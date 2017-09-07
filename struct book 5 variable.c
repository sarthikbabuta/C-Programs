#include<stdio.h>
#include<string.h>
struct book
{
	char bookname[100];
	char authorname[100];
	int noofpages;
	int price;
};
int main()
{
	int i=0;
	struct book b[100];
	printf("enter the detail:-\n");
	for(i=0;i<5;i++)
	{
		printf("enter the book name:-\n");
		scanf("%s",&b[i].bookname);
		printf("enter the author name:-\n");
		scanf("%s",&b[i].authorname);
		printf("enter the pages:-\n");
		scanf("%d",&b[i].noofpages);
		printf("enter the price:-\n");
		scanf("%d",&b[i].price);
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",b[i].bookname);
		printf("%s\n",b[i].authorname);
		printf("%d\n",b[i].noofpages);
		printf("%d\n",b[i].price);
	}
}
