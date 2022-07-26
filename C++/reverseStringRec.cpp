#include<iostream>
using namespace std;

/*string reverse(char s[], int size)
{
	if(size==0 || size==1)
		return s;

	swap(s[0],s[size-1]);
	return reverse(s+1,size-2);	
}*/

void reverse(string &name, int s, int e)
{
	if(s>e)
		return;

	swap(name[s],name[e]);
	s++;
	e--;
	reverse(name,s,e);
}

int main()
{
	string s;
	int i=0,count=0;
	cout<<"Enter the string to reverse ";
	cin>>s;
	while(s[i]!='\0'){
		i++;
		count++;
	}
	reverse(s,0,count-1);
	cout<<"Reversed string: "<<s<<endl;		
	return 0;
}