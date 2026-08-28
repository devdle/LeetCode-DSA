class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(size_t i=0; i<nums.size(); ++i){
            if(duplicate.find(nums[i]) != duplicate.end()){
                return true;
            }
            else duplicate[nums[i]] = i;
        }
        return false;
    }
};