class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        n = len(s)
        main = ""
        s = s.lower()
        check = "abcdefghijklmnopqrstuvwxyz1234567890"
        for char in s:
            if char in check:
                main+=char
        return main == main[::-1]
        