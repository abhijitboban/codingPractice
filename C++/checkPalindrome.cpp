#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &name, int s, int n)
{
	if(s>n-s-1)
		return true;

	if(name[s]!=name[n-s-1])
		return false;
	s++;
	return isPalindrome(name,s,n);
}

int main()
{
	string s;
	int i=0;
	// int count=0;
	cout<<"Enter the string to check ";
	cin>>s;
	int n=s.length();
	/*while(s[i]!='\0')
	{
		i++;
		count++;
	}*/
	if(isPalindrome(s,0,n))
		cout<<s<<" is a Pallindrome"<<endl;
	else
		cout<<s<<" is not a Pallindrome"<<endl;				
	return 0;
}