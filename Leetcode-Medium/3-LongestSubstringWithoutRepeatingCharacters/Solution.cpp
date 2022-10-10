class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int mx=0;
        
        int left=0, right=0;
        while(right<s.size()){
            if(!m[s[right]-65]) {
                m[s[right]-65]=right+1;
            } else {
                left=max(m[s[right]-65],left);
                m[s[right]-65]=right+1;
            }
            
            mx=max(mx, right-left+1);
            right++;
        }
        
        return mx;
    }
};