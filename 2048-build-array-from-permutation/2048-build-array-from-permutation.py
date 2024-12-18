class Solution(object):
    def buildArray(self, nums):
        arr = []
        count = 0
        for i in nums:
            arr.append(nums[nums[count]])
            count +=1
            
        return arr

        