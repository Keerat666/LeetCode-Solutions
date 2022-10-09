class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = len(nums)
        if l == 0 or l == 1:
            return l
        nums.sort();
        p = 1
        for q in range(1, l):
            if nums[q] != nums[q-1]:
                nums[p] = nums[q]
                p += 1
        return p
