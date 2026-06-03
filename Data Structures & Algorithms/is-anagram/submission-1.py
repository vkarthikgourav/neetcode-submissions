class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        str1=list(s)
        str2=list(t)

        s1=sorted(str1)
        s2=sorted(str2)
        
        if(s1==s2):
            return True
        else:
            return False