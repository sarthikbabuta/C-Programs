#include<stdio.h>
#include<string.h>
struct book
{
	char bookname[100];
	int bookid;
	int bookprice;
};
void display(int n,char str[],int p)
{
	printf("\n %d \t %s \t %d",n,str,p);
}
void show(struct book b)
{
	printf("\n %d \t %s \t %d",b.bookid,b.bookname,b.bookprice);
}
int main()
{
struct book b;
b.bookid=1234;
b.bookname="abcd";
b.bookprice=250;
display(b.bookid,b.bookname,b.bookprice);
show(b);
return 0;	
}
