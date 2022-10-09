class Solution(object):
    def searchInsert(self, nums, target):
        s,e=0,len(nums)
		#We use binary search to find index of element if it exists in the list.
        if target in nums:
            while s<=e:
                m=(s+e)//2
                if nums[m]==target:
                    return m
                elif nums[m]<target:
                    s=m
                elif nums[m]>target:
                    e=m
		#In the else case, check if the number is greater than all existing elements first.
		#If yes, return the index as length of the input list since it gets added at the end.
        else:
            if target>max(nums):
                return len(nums)
			#Run until you find the position of the non-existing element in the list 
            else:
                for i in range(len(nums)):
                    if nums[i]>target:
                        return i
