class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> length;
        int current = 1;
        int longest = 1;
        if(nums.size()==0) return 0;
        for(size_t i=0; i< nums.size(); i++){
            length.insert(nums[i]);
        }
        for(auto it = length.begin(); it != length.end(); it++){
           if(length.find(*it-1) != length.end())
              continue;
            current = 1;
            int start = *it;
            while(length.find(start+1) != length.end()){
             current++;
             start++;
            }
            longest = max(longest,current);
           }
           return longest;
        }
};