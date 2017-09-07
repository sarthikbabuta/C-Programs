#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char str[]="this an example string";
	int len=strlen(str);
	char *substr=new char[len];
	cout<<"the main string is"<<str;
	cout<<"\n\n enter the substring to be search";
	cin>>substr;
	int k,len2=strlen(substr);
	for(i=0;i<len;i++)
	{
		k=i;
		for(j=0;j<len2;j++)
		{
			if(str[k]==substr[j])
			{
				if(j==len2-1)
				{
					cout<<"\n the substring is present";
					exit(0);
				}
			}
			k++;
		}
		else
		{
			break;
		}
	}
	if(i==len)
	{
		cout<<"\n the substring ";
	}
}
