#include<iostream>
#include<vector>

using namespace std;

int findPosition(vector<int>& arr,int k)
{
    int s=0,e=arr.size()-1;
	int m;
	int p=-1;
	while(s<e)
	{
		m = s+(e-s)/2;
		if(arr[m]>=arr[0])
		{
			s=m+1;
		}	
		else 
			e=m;	 
	}	
	if(k>=arr[0])
	{
		s=0,e--;
		while(s<=e)
		{
			m = s+(e-s)/2;
			if(arr[m]==k)
			{
				p=m;
				break;
			}	
			else if(k<arr[m]) 
			{
				e=m-1;
			}
			else
				s=m+1;	
		}
	}	
	else
	{
		e=arr.size()-1;
		while(s<=e)
		{
			m = s+(e-s)/2;
			if(arr[m]==k)
			{
				p=m;
				break;
			}	
			else if(k<arr[m]) 
			{
				e=m-1;
			}
			else
				s=m+1;	
		}
	}
	return p;		
}

int main()
{
	vector<int> v{100,-2,6,10,11};
	int position;
	int k=100;
	position=findPosition(v,k);
	cout<<"Position of Element is "<<position<<endl; 
	return 0;
}