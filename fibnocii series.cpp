#include <stdio.h>
int main()
{
    int i,n,n1=0,n2=1,nextTerm=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d",n1,n2);
    for(i=3;i<=n;i++)
    {
       
        n1=n2;
        n2=nextTerm;
        nextTerm=n1+n2;
         
        printf(" %d",nextTerm);
    }
    return 0;
}
