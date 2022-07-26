#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findIntersection(vector<int> v1,int n,vector<int> v2,int m)
{
	vector<int> ans;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(v1[i]<v2[j])
			i++;
		else if(v1[i]==v2[j])
		{
			ans.push_back(v2[j]);
			i++,j++;
		}

		else
			j++;
	}
	return ans;
}


int main()
{
	vector<int> a{1,2,2,2,3,4};
	vector<int> b{2,2,3,3};
	vector<int> c;
	int x=6,y=4;
	c=findIntersection(a,x,b,y);
	for(auto i:c)
	cout<<i<<" ";
	cout<<endl;
	return 0;
}