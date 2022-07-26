#include<iostream>
using namespace std;

int fastExponentiation(int m, int n)
{
	if(n==0)
		return 1;
	/*if(n==1)
		return m;*/
	if(n&1)
		return m*fastExponentiation(m,n/2)*fastExponentiation(m,n/2); 
	else
		return fastExponentiation(m,n/2)*fastExponentiation(m,n/2);
}

int main()
{
	int m,n;
	cout<<"Enter base: ";
	cin>>m;
	cout<<"Enter exponent: ";
	cin>>n;
	cout<<m<<"^"<<n<<" is "<<fastExponentiation(m,n)<<endl;				
	return 0;
}