#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int k)
{
  if(n==0)
    return false;
  
  if(k==arr[0])
    return true;
  
  return linearSearch(arr+1,n-1,k);
}

int main()
{ 
  int n,k;
  cout<<"Enter no. of elements in array ";
  cin>>n;
  int arr[n];
  if(n!=0)
  {
    cout<<"\nEnter the numbers ";
    for(int i=0;i<n;i++)
      cin>>arr[i];

    cout<<"\nEnter the number to search ";
    cin>>k;

    if(linearSearch(arr,n,k))
      cout<<k<<" found"<<endl;
    else
      cout<<k<<" not found"<<endl;
  }

  else
    cout<<"No element in array"<<endl;   
  return 0;
}