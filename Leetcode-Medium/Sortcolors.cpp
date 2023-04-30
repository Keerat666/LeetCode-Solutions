class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),temp=0;
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                temp=nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp;
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            mid++;
            else
            {
                if(nums[mid]==2)
                {
                    temp=nums[mid];
                    nums[mid]=nums[high];
                    nums[high]=temp;
                    high--;
                }
            }
        }
        for(auto x : nums)
        {
            cout<<x<<" ";
        }}};
