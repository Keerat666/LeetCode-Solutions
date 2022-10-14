//387. First Unique Character in a String
//https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> fq(26,0);
        
        for(int i=0;i<s.length();i++)
            fq[s[i]-'a']++;
        
        for(int i=0;i<s.length();i++)
            if(fq[s[i]-'a']==1)
                return i;
        
        return -1;
    }
};