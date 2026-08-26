    // Time complexity O(n)
    // Space complexity O(1)
    // Using frequency counting method
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        size_t length = s.size();
        for(size_t i = 0; i < length; i++){
            count[s[i] - 'a']++;
        }
        for(int i = 0; i < length; i++){
            if(count[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};