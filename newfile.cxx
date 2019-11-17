#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int sum=0, num, rev, p;
	cout<<"Enter a number: ";
	cin>>num;
	int temp;
	temp=num;
	while(num>0)
	{
		rev=num%10;
		p=pow(rev, 3);
		sum=sum+p;
		num=num/10;
	}
	    cout<<sum<<endl;
	    if(temp==sum)
	    cout<<"It is a Armstrong number";
	    else
	    cout<<"Not an Armstong number";
	    return 0;
}