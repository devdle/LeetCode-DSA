class Solution {
public:
    int search(vector<int>& nums, int target) {
        int siz = nums.size();
        int bottom = 0, top = siz - 1, mid;
        while(top >= bottom){
            mid = (top + bottom)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) top = mid - 1;
            else bottom = mid + 1;
        }
        return -1;

    }
};