class Solution {
public:
    int number_of_bouq(vector<int>& bloomDay,int day,int k)	
    {
        int bouquets=0,flowers=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
                flowers++;
            else
                flowers=0;
            if(flowers==k)  
            {
                bouquets++;
                flowers=0;
            }
        }
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int low=INT_MAX,high=INT_MIN,mid;
        
        //finding minimum and maximum number of days required to make all bouquets
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<low){
                low = bloomDay[i];
            }
            if(bloomDay[i]>high){
                high = bloomDay[i];
            }
        }
        
        //binary search for minimum number of days required
        while(low<high)			
        {
            mid=(low+high)>>1;
            if(number_of_bouq(bloomDay,mid,k)<m)
                low=mid+1;
            else
                high=mid;
        }
        return number_of_bouq(bloomDay,low,k)>=m?low:-1;		
    }
};