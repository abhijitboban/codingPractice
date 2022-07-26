#include <iostream>
#include<vector>
using namespace std;

void solve(string &s, int index, vector<string> &ans)
{
	if(index == s.length())
	{
		ans.push_back(s);
		return;
	}

	for(int j=index; j<s.length(); j++)
	{
		swap(s[j],s[index]);
		solve(s,index+1,ans);
		swap(s[j],s[index]);
	}	
}

vector<string> generatePermutations(string str)
{
	vector<string> ans;
	int index = 0;

	solve(str,index,ans);
	return ans;
}

int main() {
   
    string s;
    cout<<"Enter the string ";
    cin>>s;
    vector<string> v = generatePermutations(s);
    cout<<"{ ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<", ";
    }
    cout<<" }";
    cout<<endl;
    return 0;
}	