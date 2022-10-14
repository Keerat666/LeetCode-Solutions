class Solution {
public:
    int countLargestGroup(int n) 
    {
        int size=0;
        map<int,set<int>>mp;  
        
        for(int i=1;i<=n;i++)
        {
            int num=i;
            int sum=0;
            while(num)
            {
                sum=sum+(num%10);
                num=num/10;
            }
            mp[sum].insert(i);
            if(mp[sum].size()>size)
            {
                size=mp[sum].size();
            }
        }
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second.size()==size)
            {
                count++;
            }
        }
        return count;
    }
};
