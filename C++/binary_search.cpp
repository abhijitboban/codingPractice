#include<iostream>

using namespace std;

int binarySearch(int a[],int l, int r,int n)
{
	int m;
	while(l<=r)
	{
		m = l+(r-l)/2;
		if(a[m]==n)
			return (m+1);
		else if(n<a[m])
		 	r=m-1;
		else
			l=m+1;
	}
	return -1;
}

int main()
{
	int myarr[10], num, output;
	cout<<"Enter 10 integers in Ascending order"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>myarr[i];
	}	
	cout<<"\nEnter the element to search ";
	cin>>num;
	output = binarySearch(myarr,0,9,num);	
	if(output==-1)
	{
		cout<<"\nNo match found"<<endl;
	}
	else 
	{
		cout<<"\nElement found at position "<<output<<endl;
	}	
	return 0;
}