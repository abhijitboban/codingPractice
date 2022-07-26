#include<iostream>
#include<vector>
using namespace std;

// void moveZeroes(vector<int> &arr)
// {
// 	int i = 0, j = 1;
// 	while(j<arr.size() )
// 	{
// 		while(arr[i]!=0)
// 			i++;
// 		if(arr[j]!=0)
// 		{
// 			swap(arr[i],arr[j]);
// 			i++;
// 		}
// 		j++;
// 	}
// }

void moveZeroes(vector<int>& nums) 
    {
        int i = 0, j = 1;
        while(nums[i]!=0 & i<nums.size()-2)
                i++,j++;
        while(j<nums.size())
        {
            if(nums[i]==0 & nums[j]!=0)
            	swap(nums[i++],nums[j]);           
            j++;
        }
    }

int main()
{
	vector<int> arr{0,0,1};
	moveZeroes(arr);
	cout<<"Modified array: ";
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}