class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;
        vector<vector<string>> result;
        for(size_t i=0; i < strs.size(); ++i){ 
          string key = strs[i];
          sort(key.begin(),key.end());
          group[key].push_back(strs[i]);
        }
        for(auto& value: group){
            result.push_back(value.second);
        }
        return result;
    }
};