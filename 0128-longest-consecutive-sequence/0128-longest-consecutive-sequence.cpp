class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> length;
        int current = 1;
        int longest = 1;
        if(nums.size()==0) return 0;
        for(size_t i=0; i< nums.size(); i++){
            length.insert(nums[i]);
        }
        for(auto it = length.begin(); it != length.end(); it++){
            auto next = std::next(it);
        if(next != length.end()){
        if(*it+1 == *next)
            current++;
        else if(*it + 1 != *next) {
            longest = max(current, longest);
            current = 1;
        }}
        else longest = max(longest, current);
    }

        return longest;
    }
};