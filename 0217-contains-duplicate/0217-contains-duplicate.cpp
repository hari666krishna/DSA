class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(auto &x:nums){
            freq[x]++;
        }
        for(auto &x:freq){
            if(x.second >= 2) return true;
        }
        return false;
    }
};