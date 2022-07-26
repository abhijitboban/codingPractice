#include<iostream>

using namespace std;

int sqroot(int a)
{
    int s=1,e=a;
	int m;
	int ans;
	while(s<e)
	{
		m = s+(e-s)/2;
		if(m*m==a)
		{
			ans=m;
			break;
		}
		else if(m*m>a)
			e=m-1;	
		else
		{
			ans=m;
			s=m+1;	 
		}
	}	
	return ans;
}

double morePrecision(int a,int precision,int ans)
{
	double sol=ans;
	double factor=1;
	for(int i=0;i<precision;i++)
	{	
		factor=factor/10;
		for(double j=sol;j*j<a;j=j+factor)
			sol=j;
	}	
	return sol;
}

int main()
{
	int n = 37;
	double sqrt;
	int temp=sqroot(n);
	sqrt=morePrecision(n,3,temp);
	cout<<"Square root of "<<n<<" is "<<sqrt<<endl; 
	return 0;
}