#include<iostream>
using namespace std;
int main()
{
	int x=100,y=45;
	double z;
	z=static_cast<double>(x/y);
	cout<<z<<endl;
	z=static_cast<double>(x)/y;
	cout<<z;
	return 0;
}