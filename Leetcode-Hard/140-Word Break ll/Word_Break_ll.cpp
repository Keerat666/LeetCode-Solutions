class Solution 
{
    public:
    
    void solve(int index,int n,string temp,string &s,
               unordered_map<string,bool>&m,vector<string>&ans)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        
        string word="";
        for(int i=index;i<n;i++)
        {
            word += s[i];
            
            if(m[word])
            {
                string str="";
                if(temp.length()==0)
                {
                    str += word;
                }
                else
                {
                    str = temp + " " + word; 
                }
                solve(i+1,n,str,s,m,ans);
            }
        }
        
    }
    
    vector<string> wordBreak(string s, vector<string>&dict) 
    {
        vector<string>ans;
        unordered_map<string,bool>m;
        int n = s.length();
        
        for(int i=0;i<dict.size();i++)
        {
            m[dict[i]] = true;
        }
        
        solve(0,n,"",s,m,ans);
        
        return ans;
    }
};
