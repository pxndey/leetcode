class Solution(object):
    def minPartitions(self, n):
        str(n)
        MAX = 0
        for i in n:
            if int(i)>MAX:
                MAX = int(i)
        return MAX
        