class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)return {};
        sort(nums.begin(),nums.end());
        int n =nums.size();
        if(nums[0]>0)return {};
        map<int,int> m ;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
        if(nums[i]>0)break;
            for(int j=i+1;j<n-1;j++){
                int reqd=-1*(nums[i]+nums[j]);
                if(m.count(reqd)&&m.find(reqd)->second>j)
                    ans.push_back({nums[i],nums[j],reqd});
                    j=m.find(nums[j])->second;
            }
            i=m.find(nums[i])->second;
        }
        return ans;
    }
};
