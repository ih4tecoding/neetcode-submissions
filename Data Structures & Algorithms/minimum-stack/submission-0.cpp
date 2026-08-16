class MinStack {
    vector<pair<int, int>> st;

public:
    void push(int value) {
        if (st.empty()) {
            st.emplace_back(value, value);
        } else {
            st.emplace_back(value, min(value, st.back().second));
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() const {
        return st.back().first;
    }

    int getMin() const {
        return st.back().second;
    }
};