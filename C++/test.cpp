#include<iostream>
using namespace std;

int arraySum(int arr[],int n)
{
  if(n==0)
    return 0;
  
  if(n==1)
    return arr[0];

  
  int sum = arr[0] + arraySum(arr+1,n-1);  
  return sum;  
}

int main()
{ 
  int n = 0;
  cout<<"Enter no. of elements in array ";
  cin>>n;
  int arr[n];
  if(n!=0)
    cout<<"\nEnter the numbers to add ";
  
  for(int i=0;i<n;i++)
    cin>>arr[i];

  cout<<"The sum of numbers is "<<arraySum(arr,n)<<endl;
  return 0;
}