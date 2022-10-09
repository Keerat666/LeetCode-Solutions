class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count = 0;
        
        for(int i = 0;i<nums.size();i++){
            
            if(nums[i]!=val){                           // Checking if the value is present
                nums[count]=nums[i];                    // Storing the values at new Indexes
                count++;
            }
        }
        return count;
    }
};
