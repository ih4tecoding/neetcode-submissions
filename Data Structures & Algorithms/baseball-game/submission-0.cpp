class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        scores.reserve(operations.size());

        int total = 0;

        for (const string& op : operations) {
            if (op == "C") {
                total -= scores.back();
                scores.pop_back();
            } 
            else if (op == "D") {
                int val = scores.back() * 2;
                scores.push_back(val);
                total += val;
            } 
            else if (op == "+") {
                int n = (int)scores.size();
                int val = scores[n - 1] + scores[n - 2];
                scores.push_back(val);
                total += val;
            } 
            else {
                int val = stoi(op);
                scores.push_back(val);
                total += val;
            }
        }

        return total;
    }
};