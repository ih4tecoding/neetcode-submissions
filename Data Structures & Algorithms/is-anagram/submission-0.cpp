class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ht(26,0);
        if (s.size() != t.size()) return false;
        for(const char c: s) ht[c-'a']++;
        for( char c: t) {
            ht[c-'a']--;
        }  
        for(const int i: ht){
            if (i!= 0) return false;
        }   
        return true; 
    }
};
