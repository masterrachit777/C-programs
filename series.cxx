#include<iostream>
#include<math.h>
using namespace std;
int fact(int f, int j);
int main()
{
	int n,f,y,sum=0;
	char a='x';
	cout<<"Enter a number: ";
	cin>>n;
	for(int j=0;j<=n;j++)
	{
		if(j==0)
		cout<<"1+";
		else 
		{
			y=((pow(a,j))/(fact(f,j)));
			cout<<y<<"+";
			sum=sum+y;
		}
	}
	cout<<'\n'<<sum;
	return 0;
}
int fact(int f, int j)
	{
		f=1;
		for(int k=1;k<=j;k++)
		{
			f=f*k;
		}
		return f;
	}