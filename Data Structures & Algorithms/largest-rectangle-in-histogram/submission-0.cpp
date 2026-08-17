class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> st;
        st.reserve(n);

        long long maxArea = 0;

        for (int i = 0; i <= n; i++) {
            // Sentinel height 0 at i == n
            int cur = (i == n ? 0 : heights[i]);

            while (!st.empty() && heights[st.back()] >= cur) {
                int h = heights[st.back()];
                st.pop_back();

                int left = st.empty() ? -1 : st.back();
                int width = i - left - 1;

                maxArea = max(maxArea, 1LL * h * width);
            }

            // Only push real indices, not the sentinel index
            if (i < n) {
                st.push_back(i);
            }
        }

        return (int)maxArea;
    }
};