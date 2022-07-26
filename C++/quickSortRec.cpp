#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr, int s, int e)
{
	int p = s, count = 0;

	for(int i=p+1;i<arr.size();i++)
	{
		if(arr[i]<arr[p])
			count++;
	}
	
	swap(arr[p],arr[s+count]);
	p = s+count;

	int i=s,j=e;
	while(i<p & j>p)
	{
		while(arr[i]<arr[p])
			i++;
		while(arr[j]>arr[p])
			j--;
		if(arr[i]>arr[p] & arr[j]<arr[p])
		{
			swap(arr[i],arr[j]);
			i++,j--;
		}
	}
	return p;
}

void quickSort(vector<int> &arr, int s, int e)
{
	if(s>=e)
		return;

	int p = partition(arr,s,e);

	quickSort(arr,s,p-1);
	quickSort(arr,p+1,e);
}

int main()
{
	int n,a;
	cout<<"Enter number of elements in the list ";
	cin>>n;
	vector<int> v;
	cout<<"Enter "<<n<<" numbers ";
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}	
	quickSort(v,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
