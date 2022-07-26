#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i=0,j=0;
        if(n>0)
        {
            while(i<m)
            {
                if(nums2[j]<nums1[i])
                {
                    swap(nums2[j],nums1[i]);
                    sort(nums2.begin(),nums2.end());
                }        
                i++;	
            }
            while(i<m+n)
            {
                nums1[i]=nums2[j];
                i++,j++;
            }
        }   
    }

int main()
{
	vector<int> v1{4,0,0,0,0,0},v2{1,2,3,5,6};
	merge(v1,1,v2,5);
	cout<<"Merged array: ";
	for(int i=0;i<6;i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	return 0;
}
