#include<iostream>

using namespace std;

int getMax(int arr[])
{
	int max = arr[0];
	for(int i=1;i<8;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}

void countingSort(int arr[],int div)
{
	int output_arr[8];
	int count_arr[10] = {0};
	for(int j=0;j<8;j++)
	{
		count_arr[(arr[j]/div)%10]++;
	}
	for(int k=1;k<10;k++)
	{
		count_arr[k]=count_arr[k]+count_arr[k-1];
	}
	for(int i=7;i>=0;i--)
	{
		output_arr[count_arr[(arr[i]/div)%10]-1]=arr[i];
		count_arr[(arr[i]/div)%10]--;
	}
	for(int i=0;i<8;i++)
	{
		arr[i]=output_arr[i];
	}
}
void radixSort(int arr[])
{	
	int m = getMax(arr);
	
	for(int div=1;m/div>0;div*=10)
	{
		countingSort(arr,div);
	}	
}

int main()
{
	int myarr[8];
	cout<<"Enter 8 numbers ";
	for(int i=0;i<8;i++)
	{
		cin>>myarr[i];
	}

	cout<<"\nUnsorted array ";
	for(int j=0;j<8;j++)
	{
		cout<<myarr[j]<<" ";
	}

	radixSort(myarr);

	cout<<"\nSorted array ";
	for(int k=0;k<8;k++)
	{
		cout<<myarr[k]<<" ";
	}
	cout<<endl;
	return 0;
}