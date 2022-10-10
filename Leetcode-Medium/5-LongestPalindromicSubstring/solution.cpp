class Solution {
public:
    
    int expandFromCentre(int l, int r, string s, int &start)
    {
        start=l;
        while(l>=0 && r<s.size() && s[l]==s[r])
        {
            start=l;
            l--;
            r++;
        }
        
        return r-l-1;
    }
    
    string longestPalindrome(string s) {
        
        if(s.empty())
            return s;
        
        int n=s.size(),max_length=0,start;
        
        for(int i=0;i<n;i++)
        {
            int start1=0, start2=0;
            int len1=expandFromCentre(i,i,s,start1);
            int len2=expandFromCentre(i,i+1,s,start2);
            
            if(len1>len2 && len1>max_length)
            {
                start=start1;
                max_length=len1;
            }
            else if(len2>len1 && len2>max_length)
            {
                start=start2;
                max_length=len2;
            }
        }
        
        return s.substr(start,max_length);
    }
};