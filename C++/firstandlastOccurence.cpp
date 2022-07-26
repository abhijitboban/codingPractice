#include<iostream>
#include<vector>

using namespace std;

pair<int,int> firstandLastPosition(vector<int> &arr,int n, int k)
{
	int s=0,e=n-1,l=-2,r=0;
	int m = s+(e-s)/2;
	pair<int,int> p;
	while(s<=e)
	{
		if(k==arr[m])
		{
			l=m;
			while(arr[l]==k)
				l--;
			r=m;
			while(arr[r]==k)
				r++;
			break;
		}
		else if(k<arr[m])
			e=m-1;
		else
			s=m+1;
		m = s+(e-s)/2;
	}
	p.first = l+1;
	p.second = r-1;
	return p;
}

int main()
{
	vector<int> v{0,0,1,1,2,2,2,2};
	int n = 8,k = 2;
	pair<int,int> p1;
	p1=firstandLastPosition(v,n,k);
	cout<<p1.first<<","<<p1.second<<endl; 
	return 0;
}