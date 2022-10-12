from typing import List

# EXPLANATION:-
    # We will use two pointer technique to solve this problem
    # We will take left pointer at 0 and right at last index
    # If the element at l index is small, we will store area as distance between r and l multiply by l element
    # Else we will store area as distance between r and l and multiply by r element
    # Lastly, we will store the max element in area and return the answer
    
class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        ans=0
        while l<r:
            if height[l]<height[r]:
                area=height[l]*(r-l)
                l+=1
            else:
                area=height[r]*(r-l)
                r-=1
            ans=max(ans,area)
        return ans
        