class Solution {
public:
    bool isValid(string s) {
        vector<int> st;
        unordered_map<char,int> p {{'{',-3},{'(',-2}, {'[', -1}, {'}', 3}, {')',2}, {']', 1}};

        for(char c: s){
            if(p[c] < 0){
                st.push_back(p[c]);
            }else if(!st.empty()){
             int v = st.back();
             if (v+p[c] == 0)
                    st.pop_back();
             else return false;
            }else return false;
        }
        return st.empty();
    }
};