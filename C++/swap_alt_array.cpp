#include<iostream>

using namespace std;

void swap_alternate(int arr[],int size)
{
	for(int i=0;i<5;i=i+2)
		{
			if((i+1)<size)
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}	
		}
}

int main()
{
	int arr[5] = {1,2,7,8,5};
	int size = 5;
	swap_alternate(arr,size);
	for(auto i:arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}