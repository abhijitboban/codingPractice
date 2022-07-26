#include<iostream>
using namespace std;

bool binarySearch(int arr[], int k, int n, int s,int e)
{
	if(s>e)
		return false;

	int m = s+(e-s)/2;
	if(arr[m]==k)
		return true;
	else if(k>arr[m])
		return binarySearch(arr,k,e-m,m+1,e);
	return binarySearch(arr,k,n-s,s,m-1);
}

int main()
{
	int n,k;
	cout<<"Enter size of array ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter "<<n<<" elements ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"\nEnter number to find ";
	cin>>k;
	if(binarySearch(arr,k,n,0,n-1))
		cout<<k<<" found"<<endl;
	else
		cout<<k<<" not found"<<endl;
	return 0;
}