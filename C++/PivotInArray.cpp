#include<iostream>
#include<vector>

using namespace std;

int Pivot(vector<int>& arr)
{
    int s=0,e=arr.size()-1;
	int m;
	int p;
	while(s<e)
	{
		m = s+(e-s)/2;
		if(arr[m-1]>arr[m])
		{
			s=m;
			break;
		}	
		else if(arr[m]<arr[e])
			e=m;
		else
			s=m+1;	 
	}	
	return s;
}

int main()
{
	vector<int> v{3,8,10,17,1};
	int pivot;
	pivot=Pivot(v);
	cout<<"Pivot of Array is "<<pivot<<endl; 
	return 0;
}