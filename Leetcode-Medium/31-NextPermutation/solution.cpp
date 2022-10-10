class Solution {
public:
    void reverse(vector<int>&nums,int i)
    {
        int j=nums.size()-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++,j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 && nums[i+1]<=nums[i])
            i--;
        if(i>=0)
        {
            int j=n-1;
            while(nums[j]<=nums[i])//finding the just greater element than nums[i]
                j--;
            swap(nums[j],nums[i]);
        }
        reverse(nums,i+1); // to make it just next larger permutation we need to put all the elements right to i in ascending order.. they are already in descending order. if in case whole array is the largest permutaion then also it will make it in ascending order..
            
    }
     
};