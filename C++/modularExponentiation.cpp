#include<iostream>
#include<vector>
using namespace std;

int modularExponentiation(int x,int n,int m)
{	
	int res = 1;
	while(n>0)
	{
		if(n&1)
		{
			res = ((1LL*res*(x)%m))%m;
		}
		x = (1LL*x*x)%m;
		n = n>>1;
	}
	return res;
}

int main()
{
	cout<<modularExponentiation(2,4,10)<<endl;
	return 0;
}