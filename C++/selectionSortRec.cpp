#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int> &arr, int n, int i)
{
	if(i==n-1)
		return;

	int min_index=i;
	for(int j=min_index+1;j<n;j++)
	{
		if(arr[min_index]>arr[j])
			min_index=j;
	}

	if(min_index!=i)
	{
		swap(arr[i],arr[min_index]);
	}

	selectionSort(arr,n,i+1);
}

int main()
{
	int n,j;
	vector<int> v;
	cout<<"Enter size of number list ";
	cin>>n;
	cout<<"Enter list of numbers to sort: ";
	for(int i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	selectionSort(v,n,0);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}