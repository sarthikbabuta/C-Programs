#include<stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
const *ptr;
ptr++;
    printf(" value at ptr is %d\n",*ptr);
    

    

    return 0;
}
