#include<iostream>
#include<stack>

using namespace std;

bool isOperator(char c)
{
	if(c =='+'||c =='-'||c =='*'||c =='/'||c =='^')
	{
		return true;
	}
	else
	{
		return false;
	}
}

string prefix2infix(string prefix)
{
	stack<string> s;
	for(int i=prefix.length()-1;i>=0;i--)
	{
		if(prefix[i]>='a' && prefix[i]<='z' || prefix[i]>='A' && prefix[i]<='Z')
		{
			string op(1,prefix[i]);
			s.push(op);
		}

		else if(isOperator(prefix[i]))
		{
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			s.push(op1 + op2 + prefix[i]);
		}
	}
	return s.top();
}

int main()
{
	string infix_exp, prefix_exp;
	cout<<"Enter expression to evaluate ";
	cin>>prefix_exp;
	infix_exp = prefix2infix(prefix_exp);
	cout<<"\nInfix: "<<infix_exp<<endl;
	return 0;
}