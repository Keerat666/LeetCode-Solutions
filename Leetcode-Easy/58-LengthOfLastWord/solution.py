class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = " ".join(s.split())
        words = s.split(' ')
        return len(words[len(words) - 1])
      
   
