#include<iostream>
using namespace std;
void swap(int x, int y);
int main()
{
	int x=500, y=100;
	cout<<"Value of x and y"<<'\t'<<x<<'\t'<<y<<endl;
	swap(x,y);
	cout<<x<<'\t'<<y<<endl;
	return 0;
}
void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<x<<'\t'<<y<<endl;
}