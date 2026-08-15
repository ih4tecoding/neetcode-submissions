class Solution {
    string genKey(string s){
    string x = s;
    sort(x.begin(), x.end());
    return x;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> ht;
        for(auto s: strs){
            ht[genKey(s)].push_back(s);
        }
        for(auto it = ht.begin(); it != ht.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};
