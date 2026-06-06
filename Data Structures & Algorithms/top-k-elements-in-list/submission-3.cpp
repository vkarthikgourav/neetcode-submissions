class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> frequent;
        unordered_map<int,int> umap;
        
        for(auto x:nums){
            umap[x]++;
        }

        vector<pair<int,int>> arr;

        for(auto p:umap){
            arr.push_back({p.second,p.first});
        }
        sort(arr.rbegin(),arr.rend());

        vector<int> res;

        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
