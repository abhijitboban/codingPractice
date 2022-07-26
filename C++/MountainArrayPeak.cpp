#include<iostream>
#include<vector>

using namespace std;

int Peak(vector<int>& arr)
{
    int s=0,e=arr.size()-1;
	int m;
	int p;
	while(s<e)
	{
		m = s+(e-s)/2;
		if(arr[m]<arr[m+1])
			s=m+1;
		else
			e=m; 
	}
	p=e;	
	return p;
}

int main()
{
	vector<int> v{24,69,100,99,79,78,67,36,26,19};
	int peak;
	peak=Peak(v);
	cout<<"Peak of Mountain Array is "<<peak<<endl; 
	return 0;
}