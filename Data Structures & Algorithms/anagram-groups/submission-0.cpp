class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> seen;
       vector<vector<string>> ans;

       for(auto x:strs){
        string temp=x;
        sort(x.begin(),x.end());
        seen[x].push_back(temp);
       }
       for(auto x: seen){
        ans.push_back(x.second);
       }

       
        return ans;
        
    }
};
