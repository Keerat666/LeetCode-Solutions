class Solution {
public:
    void solver(string digits, vector<string> &ans, string cmb,int idx, vector<char> v[])
    {
        if(idx==digits.size()){
            ans.push_back(cmb);
            return;
        }
        
            int dig=digits[idx]-'0';
            for(int k=0;k<v[dig].size();k++)
            {
                solver(digits, ans, cmb+v[dig][k], idx+1, v);
            }
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<char> v[10];
        v[2]={'a','b','c'};
        v[3]={'d','e','f'};
        v[4]={'g','h','i'};
        v[5]={'j','k','l'};
        v[6]={'m','n','o'};
        v[7]={'p','q','r','s'};
        v[8]={'t','u','v'};
        v[9]={'w','x','y','z'};
        string s ="";
        if(digits.size()==0) return ans;
        solver(digits, ans, s,0,v);
        return ans;
    }
};