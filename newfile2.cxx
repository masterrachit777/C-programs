#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int k=0;
		for(int j=1;j<=n;j++)
		{
			if(i+j<=n)
			cout<<"  ";
			else
			{
				k++;
				cout<<k;
			}
		}
		for(int h=1;h<i;h++)
		{
			--k;
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}