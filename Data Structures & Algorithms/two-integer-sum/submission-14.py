class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices = {}

        # for i,num in enumerate(nums):
        #     indices[num]=i

        # for i, num in enumerate(nums):
        #     diff=target-num
            
        #     if diff in indices and indices[diff]!=i:
        #         return [i,indices[diff]]

        # return [] 
        prev_map=dict()

        for i, n in enumerate(nums):
            diff=target-n
            if diff in prev_map:
                return [prev_map[diff], i]
            prev_map[n]=i 