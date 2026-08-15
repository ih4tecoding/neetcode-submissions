class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int count = 0;
       unordered_set<int> ht(nums.begin(),nums.end());
       
       for( int i: ht){
        int len = 1;
        if(ht.count(i-1)==0){
            while(ht.count(++i)){
                len++;
            }
        }
        count = max(count,len);
       }
       return count;
    }
};