class Solution {
public:
    int findMin(vector<int>& nums) {
        //we will use the concept of binary search to solve this problem
        int l=0,r=nums.size()-1;
        int mid;
        while(l<=r){
             mid=(l+r)/2;
            //if the element at mid is less than element at r ,it might be the ans,so resuce the r to get a much smaller number 
            if(nums[mid]<=nums[r])r--;
            
                else l++;
        }
        return nums[mid];
    }
};
