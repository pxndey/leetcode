class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        count = 0
        for iceCream in costs:
            if iceCream<=coins:
                coins-=iceCream
                count+=1
            else:
                break
        return count