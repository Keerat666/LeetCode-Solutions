#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& a, int target)
{
    int n = a.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= target)
            return i;
    }
    return n;
}
int main()
{
    vector <int> a = {1 , 2 , 3 , 5 , 4 , 8 , 9 , 12};
    int target = 7;
    cout << searchInsert(a , target) << '\n';
}