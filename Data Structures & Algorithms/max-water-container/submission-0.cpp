class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        if (n < 1) return ans;
        int l = 0, r = n-1;
        while(l < r){
            int stored_water = (r-l) *min(height[l], height[r]);
            ans = max(stored_water, ans);
            if(height[l] < height[r]) l++;
            else r--;

        }
        return ans;
    }
};