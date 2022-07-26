#include<iostream>
#include<vector>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    if(nStairs<0)
        return 0;
    if(nStairs==0)
        return 1;
    int m = 1000000007;
    
    long long count = (countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2))%m;
    return count;
}

int main()
{
    cout<<"No. of Distinct ways : "<<countDistinctWayToClimbStair(3)<<endl;
    return 0;
}