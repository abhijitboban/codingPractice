#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int>& arr,int k,int mid)
{
	sort(arr.begin(),arr.end());
	int gap = 0,cowCount = 1;
	int lastPos=arr[0];
	for(int i=1;i<arr.size();i++)
	{	
		if(arr[i]-lastPos>=mid)
		{
			cowCount++;
			if(cowCount==k)
				return true;
			lastPos=arr[i];
		}
	}
	return false;
}

int aggressiveCows(vector<int>& stalls,int k)
{	
    int s=0,ans=-1,maxi=-1;
    for(int i=0;i<stalls.size();i++)
    	maxi = max(maxi,stalls[i]);
    int e=maxi;
	int mid;
	while(s<=e)
	{
		mid = s+(e-s)/2;
		if(isPossible(stalls,k,mid))
		{
			ans=mid;
			s=mid+1;
		}
		else
			e=mid-1;			
	}
	return ans;	
}

int main()
{
	vector<int> v{4,2,1,3,6};
	int p=aggressiveCows(v,3);
	cout<<"Max minimum distance is "<<p<<endl; 
	return 0;
}