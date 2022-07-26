#include<iostream>
#include<vector>
using namespace std;

bool sortedandRotated(vector<int> v)
{
	int i=0,count = 0;
	while(i<v.size())
	{
		if(v[i]>v[(i+1)%v.size()])
			count++;
		i++;
	}	
	if(count<=1)
		return true;
	else
		return false;
}

int main()
{
	vector<int> v{1,2,3};
	cout<<sortedandRotated(v)<<endl;
	return 0;
}