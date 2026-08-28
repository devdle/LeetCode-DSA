class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate;
        for(size_t i=0; i<nums.size(); ++i){
            if(duplicate.find(nums[i]) != duplicate.end()){
                return true;
            }
            duplicate.insert(nums[i]);
        }
        return false;
    }
};