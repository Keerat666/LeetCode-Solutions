class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int size1=num1.size();
        int size2=num2.size();
        vector <int> ans;
        int i,j;
        for( i=0,j=0;i<size1 && j<size2;){
            if(num1[i]<num2[j]){
                ans.push_back(num1[i]);
                i++;
            }
            else{
                ans.push_back(num2[j]);
                j++;
            }
        }
        while(i<size1){
            ans.push_back(num1[i]);
            i++;
        }
        while(j<size2){
            ans.push_back(num2[j]);
            j++;
        }
        int k=ans.size();
        double final;
        if(k%2==0){
            int i=k/2;
            int j=i-1;
            final=(ans[i]+ans[j]);
            final=final/2;
        }
        else{
            int i=k/2;
            final=ans[i];
        }
        return final;
    }
};
