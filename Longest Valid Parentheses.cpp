Longest Valid Parentheses

//code

class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0, close=0;
        int maxLen=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(open==close){   
                int len=open+close;
                maxLen=max(maxLen,len);
            }
			else if(close>open){  
                close=0;
                open=0;
            }
        }
        
        open=0,close=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(open==close){
                int len=open+close;
                maxLen=max(maxLen,len);
            }
            else if(close<open){     
                close=0;
                open=0;
            }            
        }
        return maxLen;
    }
};
