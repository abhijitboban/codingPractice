#include<iostream>

using namespace std;

int main()
{
	int n,f=1;
	cout<<"Enter number to find factorial";
	cin>>n;
	for (int i=n; i>=1; i--)
	{
		f = f*i;
	}
	cout<<n<<"! = "<<f<<endl;
	return 0;
}