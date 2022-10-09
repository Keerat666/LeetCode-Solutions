class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        n = len(nums)
        nums.sort()
        for i in range(n):
            front = i+1
            rear = n-1
            if rear-front==0:
                break
            sum = 0-nums[i]
            while(front<rear):
                if nums[front]+nums[rear]==sum:
                    ans.append([nums[i],nums[front],nums[rear]])
                    temp1 = nums[front]
                    temp2 = nums[rear]
                    while(temp1==nums[front] and front<rear):
                        front+=1
                    while(temp2==nums[rear] and front<rear):
                        rear-=1
                elif nums[front]+nums[rear]<sum:
                    front+=1
                else:
                    rear-=1
        new_ans = []
        for elem in ans:
            if elem not in new_ans:
                new_ans.append(elem)
        ans = new_ans
        return ans