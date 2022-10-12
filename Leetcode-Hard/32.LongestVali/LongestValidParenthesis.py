class Solution:
    def longestValidParentheses(self, s: str) -> int:
        count=0
        stack = []
        stack.append(-1)
        for i in range(len(s)):
            if s[i]=='(':
                stack.append(i)
            else:
                stack.pop()
                if len(stack)==0:
                    stack.append(i)
                else:
                    count = max(count,i-stack[-1])

        return count
