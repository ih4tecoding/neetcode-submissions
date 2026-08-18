class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = (int)nums.size() - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;      // min is to the right
            } else {
                r = m;          // min is at m or to the left
            }
        }

        return nums[l];
    }
};