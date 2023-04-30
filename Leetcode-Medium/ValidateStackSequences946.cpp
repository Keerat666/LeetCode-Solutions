class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        //checking if given arrays are of unequal size
        if(pushed.size() != popped.size()){
            return false;
        }
        stack<int> s;
        int i = 0;
        for(auto itr : pushed){
            s.push(itr);
            while(!s.empty() && s.top() == popped[i]){
                s.pop();
                i++;
            }
        }
        return s.empty();
    }
};
