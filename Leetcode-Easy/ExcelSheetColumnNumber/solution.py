class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        column = 0
        for ch in list(columnTitle):
            column = column*26 + (ord(ch)-ord("A")+1)
        return column