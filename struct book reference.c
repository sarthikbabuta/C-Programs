#include<stdio.h>
#include<string.h>
struct book 
{
	int bookid;
	int bookprice;
	char name[80];
};
void display(struct book *ptr)
{
	printf("\n %d \t %d \t %s",ptr->bookid,ptr->bookprice,ptr->name);
}
int main()
{
	struct book b;
	printf("enter bookid\n");
	scanf("%d",&b.bookid);
	printf("enter the bookprice\n");
	scanf("%d",&b.bookprice);
	printf("enter book name\n");
    scanf("%s",&b.name);
    display(&b);
    return 0;
}
