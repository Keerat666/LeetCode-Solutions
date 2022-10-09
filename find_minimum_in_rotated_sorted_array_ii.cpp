//link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// leetcode hard
class Solution {
public:
    int findMin(vector<int>& a) {
       int n=a.size();
        if(n==1){return a[0];}
        else if(n==2){return min(a[0],a[1]);}
        int l=0,r=n-1;
        while(l<=r){
            int md=l+(r-l)/2;
            
            if(a[md]==a[r]){r--;}
           else if(a[md]>a[r]){l=md+1;}
            //else if(md>0&&md<n-1&&a[md-1]<=a[md]&&a[md+1]<=a[md]){return a[md+1];}
            
            else {r=md;}
        }
        return a[l];
    }
};
