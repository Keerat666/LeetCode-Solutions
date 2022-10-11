class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d = {'2':['a','b','c'], '3':['d','e','f'], '4':['g','h','i'], '5':['j','k','l'], '6':['m','n','o'], \
             '7':['p','q','r','s'], '8':['t','u','v'], '9':['w','x','y','z']}
        a = []
        for c in digits:
            if len(a)==0:
                a = d[c]
                continue
            b = d[c]
            tmp = [x+y for x in a for y in b]
            a = tmp
        return a