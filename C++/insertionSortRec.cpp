#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &arr, int n)
{
	if(n<=1)
		return;

	insertionSort(arr,n-1);

	int key,j;
	key = arr[n-1];
	j=n-2;
	
	while(j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;
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
	insertionSort(v,n);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}