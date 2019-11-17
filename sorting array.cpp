#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,p[10],q[10],r[65];
	cout<<"enter the size of array 1: ";
	cin>>a;
	cout<<"enter the size of array 2: ";
	cin>>b;
	cout<<"enter array 1: ";
	for(int f=0;f<a;f++) 
	{
		cin>>p[f];
	}
	cout<<"enter array 2: ";
	for(int k=0;k<b;k++) 
	{
		cin>>q[k];
	}
	int l=a+b;;
		for(int x=0,d=0,i=0;l>0;)
	{	if(p[i]=='\0')
		{
	    	r[d]=q[x];
	    	d++;
	    	x++;
	    }
		else if(q[x]=='\0')
		{
			r[d]=p[i];
			d++;
			i++;
		}
		else if(p[i]<=q[x])
		{
			r[d]=p[i];
			d++;
			i++;
		}
		else
		{
			r[d]=q[x];
			d++;
			x++;
		}
		l--;
	}
	cout<<"result   ";
	for(int h=0;h<(a+b);h++)
	{
		cout<<r[h]<<"\t";
	}
	getch();
	return 0;
}
