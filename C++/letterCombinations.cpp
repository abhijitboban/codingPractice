#include <iostream>
#include<vector>
using namespace std;

void solve(string digits, string op, int index, vector<string> v, vector<string> &ans)
{
    if(index>=digits.length())
    {
        ans.push_back(op);
        return;
    }

    int number = digits[index]-'0';

    
    for(int i=0; i<v[number].length(); i++)
    {
        
        // cout<<"before call: "<<op<<endl;
        solve(digits, op + v[number][i], index+1, v, ans);
        // cout<<"after call : "<<op<<endl;
        // op.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> v{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string op = "";
    int index = 0;
    vector<string> ans;
    solve(digits, op, index, v, ans);
    return ans;
}

int main() {
   
    string s;
    cout<<"Enter the numeric string ";
    cin>>s;
    vector<string> v = letterCombinations(s);
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

