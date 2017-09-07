#include <stdio.h>
int main()
{
char str[100],patt[100],rep[100],newstr[100];
int i=0,j=0,k=0,repeat,n,copy;
printf("enter the string");
gets(str);
printf("enter the pattern");
gets(patt);
printf("enter the rep");
gets(rep);
while(str[i]!='\0')
{
	j=0;
	k=i;
	while(str[k]==patt[j])
	{
		k++;
		j++;
	}
	if(patt[j]=='\0')
	{
		copy=k;
		while(rep[repeat]!='\0')
	{
		newstr[n]=rep[repeat];
		n++;
		repeat++;
	}
	}
	newstr[n]=str[copy];
	n++;
	copy++;
	i++;
}

puts(newstr);
}
