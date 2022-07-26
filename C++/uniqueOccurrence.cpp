#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

bool uniqueOcurrences(vector<int> &v)
{	
	unordered_map<int,int> freq;
	for(auto n:v)
	{
		freq[n]++;
	}
	set<int> s;
	for(auto p:freq)
	{
		s.insert(p.second);
	}
	int x=freq.size();
	int y=s.size();

	if(x==y)
		return true;
	else
		return false;
}

int main()
{	
	vector<int> v{1,2};
	cout<<uniqueOcurrences(v)<<endl;
	return 0;
}