class Solution {
public:
    bool checkRecord(string s) {
        int ca = 0;
        string cl = "LLL";
        int cli = 0;
        int find = s.find(cl);
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'A')
                ca++;
            if(find != string::npos)
                cli = 1;
        }
        
        if(ca<2 && cli==0) {
            return true;
        }else
            return false;
    }
};
