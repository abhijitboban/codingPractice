#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> v)
{
	int a=0;
	for(int i=0;i<v.size();i++)
	{
		a=a^v[i];
	}
	for(int i=1;i<v.size();i++)
	{
		a=a^i;
	}
	return a;
}

int main()
{
	vector<int> v{1,2,3,4,4};
	cout<<findDuplicate(v)<<endl;
	return 0;
}