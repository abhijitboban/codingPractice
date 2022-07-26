#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
	int sum=0,carry = 0, i=n-1,j=m-1;
	vector<int> ans;
	for(i,j;i>=0&&j>=0;i--,j--)
	{
		sum = a[i]+b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}	

	while(i>=0)
	{
		sum = a[i]+carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	
	while(j>=0)
	{
		sum = b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	
	if(carry>0)
		ans.push_back(carry);

	reverse(ans.begin(),ans.end());	
	return ans;
}

int main()
{
	vector<int> v1{9,9,9}, v2{9,9,9}, v3;
	v3 = findArraySum(v1, v1.size(), v2, v2.size());
	for(auto i:v3)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}