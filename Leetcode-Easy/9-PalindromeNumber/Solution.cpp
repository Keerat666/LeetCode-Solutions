class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n = x;
        unsigned int sum=0;
        while(n!=0){
            sum = sum*10 + n%10;
            n /= 10;
        }
        return sum == x;
    }
};
