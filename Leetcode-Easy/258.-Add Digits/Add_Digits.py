# https://leetcode.com/problems/add-digits/
def addDigits(n): #naive solution
        while n > 9:
            result = 0 
            while n:
                result += n % 10
                n = n//10
            n = result  # O(logn) time complexity
            result = 0
        return n
class Solution: # optimized solution O(1)
    def addDigits(self, num: int) -> int:
        if(num==0):
            return 0
        elif num%9==0:
                return 9
        else:
            return num%9
    
    

print(addDigits(38))