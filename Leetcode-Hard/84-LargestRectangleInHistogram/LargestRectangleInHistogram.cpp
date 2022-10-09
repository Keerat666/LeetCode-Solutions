#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int largestRectangleArea(vector<int> &A) {
    stack<int> s;
    vector<int> v(A.size(),0),v1(A.size(),0);
    for(int i=0;i<A.size();i++)
    {
        int count=0;
        while(!s.empty() && A[s.top()]>=A[i])
        {
            count+=(1+v1[s.top()]);
            v[i]+=A[i]*(v1[s.top()]+1);
            s.pop();
        }
        v1[i]=count;
        s.push(i);
    }
    stack<int> s1;
    for(int i=0;i<A.size();i++)
    v1[i]=0;
    for(int i=(A.size()-1);i>=0;i--)
    {
        int count=0;
        while(!s1.empty() && A[s1.top()]>=A[i])
        {
            count+=(1+v1[s1.top()]);
            v[i]+=A[i]*(v1[s1.top()]+1);
            s1.pop();
        }
        v1[i]=count;
        s1.push(i);
    }
    int sum=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        sum=max(sum,v[i]+A[i]);
    }
    return sum;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    	cin>>v[i];
	}
	cout<<largestRectangleArea(v)<<endl;
}

