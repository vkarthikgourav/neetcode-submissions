class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int left_product=1;
        int right_product=1;
        
        
        for(int i=0;i<nums.size();i++){
            res[i]=left_product;
            left_product=left_product * nums[i];
        }

        for(int i=nums.size()-1;i>=0;i--){
            res[i]=res[i] * right_product;
            right_product= right_product * nums[i];
        }
        return res;
    }
};
