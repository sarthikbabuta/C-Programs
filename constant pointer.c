#include<stdio.h>
int main()
{
int num=10;
int const *ptr = &num;
printf("%d",*ptr);
return(0);
}
