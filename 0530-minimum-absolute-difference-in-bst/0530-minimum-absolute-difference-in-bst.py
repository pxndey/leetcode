# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        def trav(root, final):
            # If the root is None, return None
            if not root:
                return None

            # Append the value of the root to the final list
            final.append(root.val)

            # Recursively traverse the left and right subtrees
            trav(root.left, final)
            trav(root.right, final)

            # Return the final list
            return final

        # Recursively traverse the tree and get all the values
        values = trav(root, [])

        # Sort the values
        values.sort()

        # Find the minimum difference between any two consecutive values
        min_diff = 100000
        for i in range(1, len(values)):
            if values[i] - values[i - 1] < min_diff:
                min_diff = values[i] - values[i - 1]

        return min_diff