#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
	int s = 0;
	int e = arr.size()-1;
	while(s<e)
	{
		swap(arr[s],arr[e]);
		s++,e--;
	}
}

int main()
{
	vector<int> arr{11,7,3,12,4};
	reverseArray(arr);
	cout<<"Reversed array: ";
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}