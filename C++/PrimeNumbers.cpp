#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"Enter number to find prime or not ";
	cin>>n;
	for (i=2; i*i<=n; i++)
	{
		if((n%i)==0)
		{	
			cout<<"Not Prime"<<endl;
			break;
		}
		
	}
	if ((i*i)>n)
			cout<<"Prime"<<endl;
	return 0;
}