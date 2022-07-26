#include<iostream>
#include<vector>
using namespace std;

void sayDigits(int n,string arr[])
{
	if(n==0)
		return;
	
	int digit=n%10;
	n=n/10;
	sayDigits(n,arr);
	cout<<digit<<" "<<arr[digit];	
}
int main()
{	
	int n;
	string arr[10] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
	cout<<"Enter a number ";
	cin>>n;
	if(n==0)
	{
		cout<<arr[n]<<endl;
		return 0;	
	}
	// cout<<n<<" : ";
	sayDigits(n,arr);
	cout<<endl;
	return 0;
}