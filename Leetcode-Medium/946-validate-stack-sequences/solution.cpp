class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        if(pushed.empty() && popped.empty())
            return true;
        else
            if(!pushed.empty() && popped.empty())
                return false;
        else
            if(pushed.empty() && !popped.empty())
                return false;
        
        stack<int> s;
        bool flag=false;
        int i=0,j=0;
        
        while(1)
        {
            s.push(pushed[i]);
            
            if(s.top()==popped[j])
            {
                while(!s.empty() && j<popped.size() && s.top()==popped[j])
                {
                    s.pop();
                    j++;
                }
            }
            
            i++;
            if(i==pushed.size() && s.empty() && j==popped.size())
                return true;
            else
                if(i!=pushed.size() && j!=popped.size())
                {
                    continue;
                }
            
            return false;
        }
        
        return true;
    }
};