#include <math.h>
#include <stdio.h>

int main() {

   char ch[100][100];
    int i,j,n,m,c,k=0,pos;
    scanf("%d",&n);
     scanf("%d",&m);
    for(i=0;i<n;i++)
    {
       scanf("%s",ch[i]);
    }
  for(i=0;i<n;i++)
  {
      c=0;
      for(j=i+1;j<n;j++)
      {
          if(strcmp(ch[i],ch[j])==0)
          {
              c++;
          }
      }
      if(k<c)
      {
          k=c+1;
          pos=i;
      }
  }
    if(n==1)
    {
        printf("%s %d",ch[0],n);
    }
    else
    {
        printf("%s %d",ch[pos],k);
    }
    return 0;
}
