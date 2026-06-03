class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j])
                return true;
            }
        }
        return false;
    }
};