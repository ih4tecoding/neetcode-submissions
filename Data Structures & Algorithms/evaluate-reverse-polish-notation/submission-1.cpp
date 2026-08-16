class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        st.reserve(tokens.size());

        for (const string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int b = st.back();
                st.pop_back();

                if (s == "+") st.back() += b;
                else if (s == "-") st.back() -= b;
                else if (s == "*") st.back() *= b;
                else st.back() /= b;
            } else {
                st.push_back(stoi(s));
            }
        }

        return st.back();
    }
};