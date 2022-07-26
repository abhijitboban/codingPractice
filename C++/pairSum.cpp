#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector <vector<int>> pairSum(vector<int> v, int t)
{
	vector <vector<int>> ans;
	unordered_map<int,int> m;
	for(int i=0;i<v.size();i++)
	{	

		int key=t-v[i];
		m[v[i]]++;
		if(m.count(key))
		{
			if(key<=v[i])
				ans.push_back({key,v[i]});
			else
				ans.push_back({v[i],key});
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
}

int main()
{
	int target = 5;
	vector<int> v{1,2,3,4,5};
	vector <vector<int>> c;
	c=pairSum(v,target);
	for(int i=0;i<c.size();i++)
	{
		for(int j=0;j<2;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
