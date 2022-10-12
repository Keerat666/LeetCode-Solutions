"""
There are 4 cases to a problem like this:

We dont have any more left or right parenthesis to add
We have equal amounts of both to add
We dont have any more left parenthesis to add
There are more right parenthesis to add than left

Case 1: When working with recursive problems its always best to 
think of your base case first. What will exit the recursion? 
In this case its going to be when there aren't any more left or right parens (parenthesis) 
to add. So we'll start there. When our counts of left and right parens are both 0, 
add the string we've built to our list of strings (los) and return out of this recursion.

Case 2: We have reached a point when we have the same number of left and right parens to add. 
Given the nature of parens, and what makes this variation of dfs a little different, 
we cannot add a right paren without having first added a left. So when they are equal 
we must add a left paren first.

Case 3: This is the case of exhausting all of the left parens. If this 
has happened just add right parens until you cant anymore.

Case 4: This is another interesting case. We have already started a round of 
left parens so we could either close the current set or open another set within. 
So in this case we call the dfs variant twice. Once with a left and once with a right.

Our main function creates an empty list of strings to add to, makes the initial call 
with the left count being 1 less than the right (nautre of parens means left has to start), 
right being n and the start of the string to manipulate from being a left parent 
(again, nature of parens means left has to start). Finally, we return the list of strings.
"""

from typing import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        def dfs(l, r, s):
            if l == 0 and r == 0:
                los.append(s)
                return
            if l==r:
                dfs(l-1,r,s+'(')
            if l==0:
                dfs(l,r-1,s+')')                
            elif l < r:
                dfs(l-1,r,s+'(')
                dfs(l,r-1,s+')')
        los = []
        dfs(n-1,n, '(')
        return los