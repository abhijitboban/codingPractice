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

int precedence(char c)
{
	if (c == '^')
		return 3;
	else if(c == '*'||c == '/')
		return 2;
	else if(c == '+'||c == '-')
		return 1;
	else if(c == '$')
		return 0;
	else
		return -1;
}


string infix2prefix(stack<char> s,string infix)
{
	s.push('$');
	for(int i=0;i<(infix.length())/2;i++)
	{
		char temp = infix[(infix.length())-i-1];
		infix[(infix.length())-i-1] = infix[i];
		infix[i] = temp;
	}
	for(int i=0;i<infix.length();i++)
	{
		if(infix[i]=='(')
			infix[i]=')';
		else if (infix[i]==')')
			infix[i]='(';
	}
		
	string prefix;
	for(int i=0;i<infix.length();i++)
	{
		if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z')
			prefix += infix[i];
		else if(infix[i] == '(')
			s.push(infix[i]);
	    else if(infix[i] == ')')
			{
				while(s.top() != '(')
				{
					char temp = s.top();
					prefix+=temp;
					s.pop();
				}
				if(s.top() == '(')
					s.pop();
			}
		else if(isOperator(infix[i]))
			{
				if(s.top()=='$')
				{
					s.push(infix[i]);
				}

				else if(precedence(infix[i])>precedence(s.top()))
					s.push(infix[i]);
				else if((precedence(infix[i])==precedence(s.top())) && (infix[i]=='^'))
				{
					while((precedence(infix[i])==precedence(s.top())) && (infix[i] == '^'))
					{	
						prefix += s.top();
						s.pop();
					}
					s.push(infix[i]);
					
				}
				else if(precedence(infix[i])==precedence(s.top()))
					s.push(infix[i]);
				else 
				{
					while((s.top()!='$') && (precedence(infix[i])<precedence(s.top())))
					{
						char temp = s.top();
						prefix += temp;
						s.pop();
					}
					s.push(infix[i]);	
				}
			}
	}
	while(s.top()!='$')
	{
		char temp=s.top();
		prefix += temp;
		s.pop();
	}			

	for(int i=0;i<(prefix.length())/2;i++)
		{
			char temp = prefix[(prefix.length())-i-1];
			prefix[(prefix.length())-i-1] = prefix[i];
			prefix[i] = temp;	
		}
	for(int i=0;i<prefix.length();i++)
		{
			if(prefix[i]=='(')
				prefix[i]=')';
			else if (prefix[i]==')')
				prefix[i]='(';
		}	
	return prefix;
}	

int main()
{
	string infix_exp, prefix_exp;
	stack<char> s;
	cout<<"Enter expression to evaluate ";
	cin>>infix_exp;
	prefix_exp = infix2prefix(s,infix_exp);
	cout<<"\nPrefix: "<<prefix_exp<<endl;
	return 0;
}