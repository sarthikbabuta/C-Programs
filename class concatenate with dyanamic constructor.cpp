#include<iostream>
#include<string.h>
using namespace std;
class string
{
	char *name;
	int length;
	public:
		String()
		{
			length=0;
			name=new char[length+1]; //1 null value
		}
		String (char *s)
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name,s);
		}
		void display(void)
		{
			cout<<name<<"\n";
		}
	    void join(String &,String &);
};
		void String ::join(String &a,String &b)
		{
			length=a.length+b.length;
			delete name;
			name=new char[length+1];//dynamic allocation 
			strcpy(name,a.name); //a copied
			strcat(name,b.name); //pointing b at end of a
		}
		int main()
		{
			char *first="object"; //only in case of strings
			String name1(first),name2("oriented"),name3("programming"),s1,s2;
			s1.join(name1,name2); //s1.name=object oriented
			s2.join(s1,name3); //object oriented programming
			name1.display();
			name2.display();
			name3.display();
			s1.display();
			s2.display();
			return 0;
		}
