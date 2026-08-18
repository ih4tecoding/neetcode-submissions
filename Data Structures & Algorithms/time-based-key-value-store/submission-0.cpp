class TimeMap {
    unordered_map<string,vector<pair<int,string>>> ht;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        ht[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string res = "";
        int l = 0, r = (int)ht[key].size()-1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(ht[key][m].first <= timestamp){
                res = ht[key][m].second;
                l = m+1;
            }else {
                r = m-1;
            }
        }
        return res;
    }
};
