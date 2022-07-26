#include<iostream>
#include <string>

using namespace std;

class laptop
{
	public:
	string name;
	string brand;
	float price;
	string processor;

	void getdata()
	{
		cout<<"Name : ";
		cin>>name;
		cout<<"Brand : ";
		cin>>brand;
		cout<<"Price : ";
		cin>>price;
		cout<<"Processor : ";
		cin>>processor;
		cout<<endl;
	}

	void showdata()
	{
		cout<<"Name : "<<name<<"\nBrand : "<<brand<<"\nPrice : "<<price<<"\nProcessor: "<<processor<<endl;
	}

	void startUp()
	{
		cout<<"\nLaptop "<<name<<" has started"<<endl;
	}

	void shutdown()
	{
		cout<<"\nLaptop "<<name<<" is shutting down."<<endl;
	}

};

int main()
{
	laptop laptop1;
	laptop1.getdata();
	laptop1.showdata();
	laptop1.startUp();
	laptop1.shutdown();
	return 0;
}
