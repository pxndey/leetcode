class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        retArr = []
        for i in range(0,n):
            retArr.append(nums[i])
            retArr.append(nums[n+i])

        return retArr
