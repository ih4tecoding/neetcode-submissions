class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = (int)height.size();

        if (n < 2) return 0;

        int left = 0;
        int right = n - 1;

        long long ans = 0;

        while (left < right) {
            long long area = 1LL * (right - left) * min(height[left], height[right]);
            ans = max(ans, area);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return (int)ans;
    }
};