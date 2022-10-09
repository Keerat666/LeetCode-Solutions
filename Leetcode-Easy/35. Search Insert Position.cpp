class Solution {
public:
int searchInsert(vector& nums, int target) {

    int i = 0;
    int j = nums.size() - 1;
    
    int temp = 0;
    while(i <= j){
        int mid = i + (j-i)/2;
        
        if(nums[mid] < target){
            if(mid + 1 > temp){
                temp = mid + 1;
            }
            i = mid + 1;
        }else if(nums[mid] == target){
            return mid;
        }else
            j = mid - 1;
    }
    
    return temp;
}
};
