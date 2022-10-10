/*
    As it is advanced version of partitoning the time complexity 
    of this algorithm is O(N).
*/

class Solution {
    int partition(int i,int j,vector<int> &nums){
        int pv = i;
        while(i<j){
            while(i<=j && nums[i]<=nums[pv]) i++;
            while(i<=j && nums[j]>=nums[pv]) j--;
            
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[pv],nums[j]);
        return j;
    }
    
    int quicksort(int i,int j,int k,vector<int> &nums){
        if(i<=j){
            int ind = partition(i,j,nums);
            int cnt = nums.size()-k;
            if(cnt==ind) return nums[ind];
            if(cnt<ind) return quicksort(i,ind-1,k,nums);
            if(cnt>ind) return quicksort(ind+1,j,k,nums);
        }
        return 0;
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickselect(0,nums.size()-1,k,nums);
    }
};