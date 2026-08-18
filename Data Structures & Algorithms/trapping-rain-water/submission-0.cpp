class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;

        int left = 0;
        int right = n - 1;
        
        int left_max = 0;
        int right_max = 0;
        
        int ans = 0;

        while (left < right) {
            // Process the side with the smaller maximum boundary
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left]; // Update max boundary
                } else {
                    ans += left_max - height[left]; // Trap water
                }
                left++;
            } else {
                if (height[right] >= right_max) {
                    right_max = height[right]; // Update max boundary
                } else {
                    ans += right_max - height[right]; // Trap water
                }
                right--;
            }
        }

        return ans;
    }
};