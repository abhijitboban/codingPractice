#include<iostream>
#include <string>

using namespace std;

class laptop
{
public:
	laptop()
	{
		cout<<"Base Class Called"<<endl;
	}	
	string name;
	float price;
};

class gamingLaptop : public laptop
{
public:
  	string name;
  	int vram;
  	gamingLaptop()
  	{
  		cout<<"Derived Class 1 Called"<<endl;
  	}

};

class gamingSystem : public gamingLaptop
{
public:
	gamingSystem()
	{
		cout<<"Derived Class 2 Called"<<endl;
	}
};	
	 

int main()
{
	gamingSystem lap1;	
	return 0;
}
