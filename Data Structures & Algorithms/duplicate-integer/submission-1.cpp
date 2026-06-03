class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            
            int counts=count(nums.begin(), nums.end(), nums[i]);
            if(counts>1) return true;    
        }
        return false;
    }
};