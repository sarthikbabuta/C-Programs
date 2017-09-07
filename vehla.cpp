#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch[100],ch2[100],ch3[100],temp;
	int i,j,a,first,last,pos,arr1[100],flag=0,arr[100],n,m,l1,l2,count=0,k;
	printf("enter the number");
	gets(ch);
	l1=strlen(ch)-1;
	for(i=0;i<l1;i++)
	{
		temp=ch[i];
		ch[i]=ch[l1];
		ch[l1]=temp;
		l1--;
	}
	puts(ch);
	
}
