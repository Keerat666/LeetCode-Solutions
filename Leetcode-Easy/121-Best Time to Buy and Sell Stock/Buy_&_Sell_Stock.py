# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution(object):
    def maxProfit(self, prices):
        left,right = 0,1
        maxpro = 0
        
        while right<len(prices):
            if prices[right] > prices[left]:
                profit = prices[right]- prices[left]
                maxpro = max(maxpro,profit)
            else:
                left = right
            right+=1
        return maxpro

s = Solution()
print(s.maxProfit([7,1,5,3,6,4,17]))