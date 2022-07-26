#include<iostream>
#include <string>

using namespace std;

class laptop
{
	public:
	string name;
	float price;
	
	laptop()
	{
		cout<<"Name : "<<name<<"\nPrice : "<<price<<endl;
	}

	laptop(string lname,float lprice)
	{
		name = lname;
		price = lprice;
		cout<<"Name : "<<name<<"\nPrice : "<<price<<endl;
	}

	laptop(const laptop &p)
	{
		name = p.name;
		price = p.price+50;
		cout<<"Name : "<<name<<"\nPrice : "<<price<<endl;
	}
	~laptop()
	{
		cout<<"Destructing "<<price<<endl;
	}

};

int main()
{
	laptop l;
	laptop m("Aspire 7",50);
	laptop k = m;	
	return 0;
}
