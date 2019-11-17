#include<iostream>
using namespace std;
int main()
{
	int a,b,count=0;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c<=2)
		{
			cout<<i<<" ";
			count++;
		}
		else
		cout<<" ";
	}
	cout<<"\nTotal prime numbers between a and b are: "<<count;
	return 0;
}