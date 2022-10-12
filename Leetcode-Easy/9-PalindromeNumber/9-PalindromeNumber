class Solution {
public:
    bool isPalindrome(int x) {
            string s = to_string(x);
            int start = 0;
            int end = s.length() - 1;

            while(start < end)
            {
                if(s[start++] != s[end--])
                    return false;
            }

            return true;
        }
};
