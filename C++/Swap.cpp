#include<iostream>

using namespace std;
 
void swap(int* x,int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a=10,b=5;
	cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
	swap(a,b);
	cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
	return 0;
}