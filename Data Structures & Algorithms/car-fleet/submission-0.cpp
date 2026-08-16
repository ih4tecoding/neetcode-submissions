class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> v, st;
        int n = position.size();
        v.reserve(n);
        for (int i = 0; i < n; i++) {
            double t = 1.f * (target - position[i]) / speed[i];
            v.push_back({position[i], t});
        }
        sort(v.begin(), v.end());
        for(int i = n-1; i >= 0; i--){
            if(!st.empty()){
                if(st.back().second < v[i].second){
                    st.push_back(v[i]);
                }
            }else st.push_back(v[i]);
        }
        return st.size();
    }
};