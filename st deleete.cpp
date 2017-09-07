#include<stdio.h>
int main()
{
	char ch2[10],ch1[100],ch3[100],i,j,k,m,copy;
	printf("neter string");
	gets(ch1);
	printf("neter string");
	gets(ch2);
	for(i=0;ch1[i]!='\0';i++)
	{
		k=i;
		j=0;
		while(ch1[k]==ch2[j])
		{
			k++; 
			j++;
		}
	if(ch2[j]=='\0')
	
	{
    copy=k;
	}
	ch3[m]=ch1[copy];
	copy++;
	m++;	
	}
	ch3[m]='\0';
	printf("%s",ch3);
}
