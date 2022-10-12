/*

188. Best Time to Buy and Sell Stock IV

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/

*/

class Solution {

int max_profit(vector<int>&prices,int k,int n,int i,int buy,vector<vector<vector<int>>>& dp)

{

      if(k==0)

      return 0;

      

      if(i==n)

      return 0;

      

      if(dp[i][k][buy]!=-1)

      return dp[i][k][buy];

     if(buy==1)

     {

        int choose_buy= max_profit(prices,k,n,i+1,0,dp)-prices[i];

        int not_choose_buy=max_profit(prices,k,n,i+1,1,dp);

         

        return dp[i][k][buy]=max(choose_buy,not_choose_buy);

      }

      else

      { 

        int choose_sell=max_profit(prices,k-1,n,i+1,1,dp)+prices[i];

        int not_choose_sell=max_profit(prices,k,n,i+1,0,dp);

        return dp[i][k][buy]=max(choose_sell,not_choose_sell);

      }

}

public:

    int maxProfit(int k, vector<int>& prices) {

        int n=prices.size();

       vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(k+1,vector<int>(2,-1)));

       return max_profit(prices,k,n,0,1,dp); 

    }

};
