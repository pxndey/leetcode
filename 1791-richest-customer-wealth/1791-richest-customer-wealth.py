class Solution(object):
    def maximumWealth(self, accounts):
        MAX = 0
        for i in accounts:
            sum = 0
            for j in i:
                sum +=j
            if sum > MAX:
                MAX = sum
        return MAX
        
        