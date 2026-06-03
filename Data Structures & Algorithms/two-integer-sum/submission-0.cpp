class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp=0;
        vector<int> pair;
        for(int i=0;i<nums.size();i++){
            temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target & i!=j){
                        pair.push_back(i);
                        pair.push_back(j);
                        return pair;
                }
            }
        }
    }
};
