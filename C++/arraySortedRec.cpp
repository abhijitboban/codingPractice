#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
	/*if(i==n-1)
		return true;
	
	if(arr[i]<arr[i+1])
	{
		i++;
		return isSorted(arr,n);
	}
	return false;*/

	if(n==0 || n==1)
		return true;

	if(arr[0]>arr[1])
		return false;

	bool ans = isSorted(arr+1,n-1);
	return ans;
		
}
int main()
{	
	vector<int> v;
	int n,j;
	bool ans;
	cout<<"Enter no. of elements in array ";
	cin>>n;
	cout<<"\nEnter the numbers to check if sorted ";
	
	for(int i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	if(isSorted(v,n))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}