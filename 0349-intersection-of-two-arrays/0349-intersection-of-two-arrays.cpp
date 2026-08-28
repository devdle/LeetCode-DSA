class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> exist;
         unordered_set<int> check;
         vector<int> result;
        for(size_t i=0; i<nums1.size(); ++i){
           if(exist.find(nums1[i]) != exist.end())
             continue;
           else exist.insert(nums1[i]);
        }
        for(size_t i=0; i<nums2.size(); ++i){
            if(exist.find(nums2[i]) != exist.end()){
               if(!(check.find(nums2[i]) != check.end())){
                  check.insert(nums2[i]);
                  result.push_back(nums2[i]);
            }}
        }
        return result;
    }
};