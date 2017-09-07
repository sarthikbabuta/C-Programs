#include<iostream>
using namespace std;
class matrix
{
	int **ptr;
	int d1,d2;
	public:
		matrix(int x,int y)
		{
			d1=x;
			d2=y;
			ptr=new int *[d1];  //m pointer 1 for each value
			for(int i=0;i<d1;i++)
			{
				ptr[i]=new int [d2];  //columns space for each value
			}
		}
		void get_value(int i,int j,int val)
		{
			ptr[i][j]=val;
		
	   }
			int put_value(int i,int j)
			{
				return (ptr[i][j]);
			}
};
int main()
{
	int m,n;
	int value;
	cout<<"enter the size";
	cin>>m>>n;
	matrix A(m,n);
	cout<<"enter elements of matrix";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>value;
			A.get_value(i,j,value);
		}
	}
	int c,d;
	cout<<"enter the row and col which you want to search";
	cin>>c>>d;
	cout<<"\n"<<A.put_value(c,d);
	return 0;
}
