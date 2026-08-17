class Solution {
public:
    bool isPalindrome(string str) {
        string s;
        for(char c: str){
            bool isNumeric = (c <= '9' && c >= '0');
            bool isAlphabet = (c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a');
            if( isNumeric || isAlphabet){
                c = static_cast<char>(tolower(c));
                s.push_back(c);
            }
        }
        int l = 0, r = (int) s.size()-1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};