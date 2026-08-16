class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        for(const string& s: tokens){
            if(s == "+"){
                int a = st[st.size()-2], b = st.back();
                st[st.size()-2] = a+b;
                st.pop_back();
            }else if (s == "-" ){
                 int a = st[st.size()-2], b = st.back();
                st[st.size()-2] = a-b;
                st.pop_back();
            }else if (s == "/") {
                 int a = st[st.size()-2], b = st.back();
                st[st.size()-2] = a/b;
                st.pop_back();

            } else if (s == "*"){
                 int a = st[st.size()-2], b = st.back();
                st[st.size()-2] = a*b;
                st.pop_back();

            }else {
                st.push_back(stoi(s));
            }
        }
        return st.back();
    }
};