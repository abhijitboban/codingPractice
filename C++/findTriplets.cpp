#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	int l=0,r=n-1,m=r;
	vector<vector<int>> ans{};
	sort(arr.begin(),arr.end());
	while(l<r && m>l)
	{
		int key = K-(arr[l]+arr[r]);
		if(key==0)
			r--;
		else if(key<arr[r])
		{		
			m = r-1;
			if((arr[l]+arr[m]+arr[r])==K)
			{
				ans.push_back({arr[l],arr[m],arr[r]});
				break; 
			}
			else
			m--;	
		}
		else if(key>arr[r])
			l++;
		else if(key == arr[r])
		{
			m = r-1;
			if(arr[m]==key)
			{
				ans.push_back({arr[l],arr[m],arr[r]});
				break; 
			}

		}
	}
	return ans;
}

int main()
{
	vector<int> v{10,5,5,5,2};
	vector<vector<int>> c;
	int n = 5;
	int k = 12;
	c=findTriplets(v,n,k);
	if(c.size()==0)
		cout<<"-1"<<endl;
	else
	{
		for(int i=0;i<1;i++)
		{
			for(int j=0;j<3;j++)
				cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}