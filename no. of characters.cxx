#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter the String: ";
	cin.getline(a,sizeof(a));
	int n=strlen(a);
	int count=1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				for(int k=j+1;k<n;k++)
				{
					a[k-1]=a[k];
				}
				n--;
				j--;
			}
		}
		cout<<"Character "<<a[i]<<" = "<<count<<" times"<<endl;
		count=1;
	}
	getch();
	return 0;
}