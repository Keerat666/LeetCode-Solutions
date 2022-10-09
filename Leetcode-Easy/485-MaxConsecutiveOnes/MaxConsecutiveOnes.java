class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int countOfOne = 0;
        for (int num:nums)
        {
            if (num == 0)
            {
                if (max<countOfOne)
                {
                    max=countOfOne;
                }
                countOfOne=0;
            }
            else
            {
                countOfOne++;
            }
        }
        return max<countOfOne?countOfOne:max;
    }
}