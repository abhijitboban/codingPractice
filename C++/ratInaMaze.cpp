#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> &visited, int i, int j)
{
	if ((i>=0 && i<n) && (j>=0 && j<n))
	{
	if(m[i][j]==1 && visited[i][j]==0)
		return true;
	else
		return false;
	}
	else
		return false;
}

void solve(vector<vector<int>> &m, int n, string op, vector<vector<int>> visited, int i, int j, vector<string> &ans)
{
	cout<<"m["<<i<<"]["<<j<<"] = "<<m[i][j]<<endl;	

	if(i==n-1 && j==n-1)
	{
		ans.push_back(op);
		return;
	}

	visited[i][j]=1;

	int x=i+1;
	int y=j;
	if(isSafe(m,n,visited,x,y))
	{
		cout<<"D"<<endl;
		op.push_back('D');
		solve(m,n,op,visited,x,y,ans);
		op.pop_back();
	}
	
	x=i;
	y=j-1;
	if(isSafe(m,n,visited,x,y))
	{
		cout<<"L"<<endl;
		op.push_back('L');
		solve(m,n,op,visited,x,y,ans);
		op.pop_back();
	}

	x=i;
	y=j+1;
	if(isSafe(m,n,visited,x,y))
	{
		cout<<"R"<<endl;
		op.push_back('R');
		solve(m,n,op,visited,x,y,ans);
		op.pop_back();
	}
	
	x=i-1;
	y=j;
	if(isSafe(m,n,visited,x,y))
	{
		cout<<"U"<<endl;
		op.push_back('U');
		solve(m,n,op,visited,x,y,ans);
		op.pop_back();
	}

	visited[i][j]=0;	
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
	vector<string> ans;

	if(m[0][0]==0)
		return ans;
	
	int i=0,j=0;

	vector<vector<int>> visited = m;

	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)
			visited[k][l]=0;
	}

	string op = "";
	solve(m,n,op,visited,i,j,ans);
	sort(ans.begin(),ans.end());
	return ans;
}

int main()
{
	vector<string> s;
	vector<vector<int>> v{{1,0,0,1}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
	int n = 4;
	s = findPath(v,n);
	cout<<"{ ";
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i];
		if(i!=s.size()-1)
			cout<<" ,";
	}
	cout<<" }"<<endl;
	return 0;
}