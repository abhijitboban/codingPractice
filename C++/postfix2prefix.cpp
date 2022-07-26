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

string postfix2infix(string postfix)
{
	stack<string> s;
	for(int i=0;i<postfix.length();i++)
	{
		if(postfix[i]>='a' && postfix[i]<='z' || postfix[i]>='A' && postfix[i]<='Z')
		{
			string op(1,postfix[i]);
			s.push(op);
		}

		else if(isOperator(postfix[i]))
		{
			string op2 = s.top();
			s.pop();
			string op1 = s.top();
			s.pop();
			s.push(postfix[i] + op1 + op2);
		}
	}
	return s.top();
}

int main()
{
	string infix_exp, postfix_exp;
	cout<<"Enter expression to evaluate ";
	cin>>postfix_exp;
	infix_exp = postfix2infix(postfix_exp);
	cout<<"\nInfix: "<<infix_exp<<endl;
	return 0;
}