class Solution {
public:

    string encode(vector<string>& strs) {
            string encoded_string;
            for(const string s: strs){
                encoded_string.append(to_string(s.size()) + "#" + s) ;
            }
            return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0, n = s.size();
        while(i < n){
            int len = 0;
            while(s[i] != '#'){
                len = 10*len + (s[i]-'0');
                i++;
            }
            i++;
            strs.push_back(s.substr(i, len));
            i+=len;
        }
        return strs;
    }
};
