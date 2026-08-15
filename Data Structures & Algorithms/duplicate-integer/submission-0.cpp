class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> ht;
        for(const int i: nums){
            if (ht[i])
                    return true;
            ht[i] = true;
               }
        
               return false;
    }
};