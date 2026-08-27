class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> theSum;
        for(size_t i = 0; i < nums.size(); i++){
          int complement = target- nums[i];
          if(theSum.find(complement)!= theSum.end()){
             return {theSum[complement],static_cast<int>(i)};
          }
          else{
          theSum[nums[i]]= i;
        }
    }
        return {};
}
};

