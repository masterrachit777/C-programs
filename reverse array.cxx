#include<iostream>
using namespace std;
int main()
{
	int ar[100],n,i;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter value of array: ";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int j=i-1;
	i=0;
	for(i=0;i<n/2;i++,j--)
	{
		int temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<"  ";
	}
	return 0;
}