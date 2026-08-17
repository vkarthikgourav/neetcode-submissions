class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash_dup=dict()

        for i in nums:
            hash_dup[i]=hash_dup.get(i, 0)+1

        for i in nums:
            if hash_dup[i]> 1:
                return True
        
        return False