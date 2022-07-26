#include<iostream>
#include<unordered_map>
#include<math.h>

using namespace std;

int kDistinct(int n,int k)
{	
	int r,c,M=pow(10,9)+7;
	int count=0;
	unordered_map<int,int> m;
	while(k>0)
	{
		r = rand() % n + 1;
		cout<<r<<" ";
		if(!(m.count(r)))
		{
			m[r]=1;
			k--;
		}
		count++;
		count=count%M;
	}
	return count;
}

int main()
{	
	int n = 11,k = 5;
	int ans=kDistinct(n,k);
	cout<<"\nNo. of turns for "<<k<<" distinct values: "<<ans<<endl;
	return 0;
}