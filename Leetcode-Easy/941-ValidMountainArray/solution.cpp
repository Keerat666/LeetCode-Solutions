class Solution {
public:
    
    bool bsearch(vector<int> A, int l, int r)
    {
        if(l>r)
            return false;
        
        int mid=(l+r)/2;
        
        if(mid-1>=0 && A[mid]>A[mid-1] && mid+1<l && A[mid]>A[mid+1])
            return bsearch(A,l,mid-1) && bsearch(A,mid+1,r);
        
        if(mid-1>=0 && A[mid]<A[mid-1])
            return bsearch(A,mid+1,r);
        else
            if(mid+1<r && A[mid]<A[mid+1])
                return bsearch(A,l,mid-1);
        
        return false;
        
    }
    bool validMountainArray(vector<int>& A) {
        
        if(A.empty())
            return false;
        else
            if(A.size()==1 || A.size()==2)
                return false;

        int m=-1;
        bool flag=false;
        for(int i=0;i<A.size()-1;i++)
        {
            if(!flag && A[i]<A[i+1])
                continue;
            else
                if(!flag && A[i]>A[i+1])
                {
                    if(i==0)
                        return false;
                    flag=true;
                }
            else
                if(flag && A[i]<=A[i+1])
                    return false;
            
            
        }
        
        return flag;
    }
};