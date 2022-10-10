class Solution(object):
    def isPalindrome(self, x):
        if (x < 0):
            return False;
        dup = x;
        num = 0;
        while (dup > 0):
            d = dup % 10;
            num = num*10 + d;
            dup = dup//10;
        return num==x;