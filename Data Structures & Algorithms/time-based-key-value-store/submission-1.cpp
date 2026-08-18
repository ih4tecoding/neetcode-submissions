class TimeMap {
    unordered_map<string,vector<pair<int,string>>> ht;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        ht[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
    auto it = ht.find(key);
    if (it == ht.end()) return "";

    const auto& v = it->second;

    // First element with timestamp > target
    auto ub = upper_bound(v.begin(), v.end(), timestamp,
        [](int t, const pair<int, string>& e) { return t < e.first; });

    if (ub == v.begin()) return "";
    return prev(ub)->second;
}
};
