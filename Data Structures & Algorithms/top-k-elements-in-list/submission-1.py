class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        sets=set(nums)
        hashm:dict[int,int]={}
        lists=[]
        count1=0
        c=0
        for i in sets:
            count=0
            for j in nums:
                if(i==j):
                    count+=1;
            hashm.update({i:count})    

        for i in range(k):
            c=max(hashm,key=hashm.get)
            lists.append(c)
            del(hashm[c])

        return lists

            
