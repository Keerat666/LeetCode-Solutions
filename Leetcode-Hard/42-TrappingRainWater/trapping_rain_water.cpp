#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int trap(vector<int>& height) {
    int n=height.size();
    int dp[n],dp1[n];
    dp[0]=height[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i-1],height[i]);
    }
    dp1[n-1]=height[n-1];
    for(int i=(n-2);i>=0;i--)
    {
        dp1[i]=max(dp1[i+1],height[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(min(dp[i],dp1[i])-height[i]);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	cout<<trap(v)<<endl;
}

