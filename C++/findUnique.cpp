#include<iostream>
 
 using namespace std;

 //Naive method
 // void findUnique(int arr[],int size)
 // {
 // 	int a[size]={0};
 // 	for(int i=0;i<size;i++)
 // 	{
 // 		a[arr[i]]++;
 // 	}
 // 	for(int i=0;i<size;i++)
 // 	{
 // 		if(a[i] == 1)
 // 		{
	//  		cout<<i;
	//  		break;	
 // 		}
 		
 // 	}
 // }

 int findUnique(int arr[],int size)
 {	
 	int a=0;
 	for(int i=0;i<size;i++)
 	{
 		a=a^arr[i];
 	}
 	return a;
 }

 int main()
 {	
 	int arr[] = {1,5,9,5,4,9,1,8,4};
 	int size = 9;
 	cout<<"The unique element is "<<findUnique(arr,size)<<endl;
 	return 0;
 }