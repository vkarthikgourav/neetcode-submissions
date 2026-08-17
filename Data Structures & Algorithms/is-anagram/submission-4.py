class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1=s
        s2=t

        s1=list(s1)
        s1.sort()
        s2=list(s2)
        s2.sort()
        if str(s1)==str(s2):
            return True
        return False