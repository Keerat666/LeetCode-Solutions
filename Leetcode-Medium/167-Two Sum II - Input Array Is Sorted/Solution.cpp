class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        int n=numbers.size();
        int sum=numbers[l]+numbers[r];
        while(sum!=target)
        {
            if(sum<target)
            {
                
                while(l+1<n and numbers[l+1]==numbers[l])
                {
                    l++;
                }
                l++;
            }
            else
            {
                while(l+1<n and numbers[r-1]==numbers[r])
                {
                    r--;
                }
                r--;
            }
            sum=numbers[l]+numbers[r];
        }
        vector<int> ans;
        ans.push_back(l+1);
        ans.push_back(r+1);
        return ans;
        
    }
};