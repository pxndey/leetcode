class Solution(object):
    def getConcatenation(self, nums):
        arr = []
        count =0
        for i in nums:
            arr.append(nums[count])
            count+=1
        count =0
        for i in nums:
            arr.append(nums[count])
            count+=1

        return arr
    
        