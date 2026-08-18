class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = (int)matrix.size();
        int n = (int)matrix[0].size();
        int l = 0, r = (m*n)-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            int i = mid/n;
            int j = mid%n;
            int v = matrix[i][j];
            if(v == target) {
                return true;
            }else if(v < target){
                l = mid+1;
            }else {
                r = mid-1;
            }
        }
        return false;
    }
};