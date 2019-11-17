#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of rows:  ";
	cin>>n;
	for(int i=1;i<=n;i=i+2)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int y=n-1;y>=1;y=y-2)
	{
		for(int z=1;z<=y;z++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
		
}