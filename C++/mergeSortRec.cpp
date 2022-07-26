#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>& arr, int s, int e)
    {
        vector<int> v1,v2;
        int m = s+(e-s)/2;
        for(int i=s;i<=m;i++)
			v1.push_back(arr[i]);
		for(int j=m+1;j<=e;j++)
			v2.push_back(arr[j]);

        int index1=0,index2=0,k=s;
        while(index1<v1.size() && index2<v2.size())
        {
        	if(v1[index1]<v2[index2])
	          	arr[k++]=v1[index1++];        
        	else
                arr[k++]=v2[index2++];	
		}            

        while(index1<v1.size())
	    	arr[k++]=v1[index1++];
	    
	    while(index2<v2.size())
	    	arr[k++]=v2[index2++];
    }

void mergeSort(vector<int> &arr, int s, int e)
{
	int m = s+(e-s)/2;

	if(s>=e)
		return;

	mergeSort(arr,s,m);
	mergeSort(arr,m+1,e);

	merge(arr,s,e);
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
	mergeSort(v,0,n-1);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}