#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<int>& arr,int n,int m,int mid)
{
	int pageSum = 0,studentCount = 1;
	for(int i=0;i<n;i++)
	{
		if(pageSum+arr[i]<=mid)
			pageSum+=arr[i];
		else
		{
			studentCount++;
			if(studentCount>m || arr[i]>mid)
				return false;
			else
				pageSum=arr[i];
		}
	}
	return true;
}

int allocateBooks(vector<int>& arr,int n,int m)
{	
    int s=0,sum=0,ans=-1;
    for(int i=0;i<n;i++)
    	sum = sum + arr[i];
    int e=sum;
	int mid;
	while(s<=e)
	{
		mid = s+(e-s)/2;
		if(isPossible(arr,n,m,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else 
			s=mid+1;
	}
	return ans;	
}

int main()
{
	vector<int> v{5,7,100,11};
	int p=allocateBooks(v,4,4);
	cout<<"Minimum no. of pages "<<p<<endl; 
	return 0;
}