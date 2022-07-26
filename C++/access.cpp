#include<iostream>
#include <string>

using namespace std;

class laptop
{

	string name;
	float price;

public:
	laptop()
	{
		name = "Aspire 7";
		price = 50;
	}	

	void show()
	{
		cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
	}
	
};

int main()
{
	laptop lap;
	lap.show();	
	return 0;
}
