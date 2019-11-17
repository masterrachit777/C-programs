#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,y;
	cout<<"Enter no. of rows: ";
	cin>>n;
	cout<<"============"<<endl;
	for(int i=1;i<=n;i++)
	{
		y=4*i;
		cout<<"*"<<setw(y)<<"*";
		cout<<setw(26-y)<<"*"<<endl;
	}
	cout<<"============";
	return 0;
}