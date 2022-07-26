#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n)
{
	int count=0;
	vector<bool> Prime(n+1,true);
	Prime[0] = Prime[1] = false;
	
	for(int i=2;i<n;i++)
	{
		if(Prime[i])
		{
			count++;
			int j=2;
			while(i*j<n)
			{
				Prime[i*j]=false;
				j++;
			}
		}
	}
	return count;
}

int main()
{
	int a = 40;
	cout<<countPrimes(a)<<endl;
	return 0;
}