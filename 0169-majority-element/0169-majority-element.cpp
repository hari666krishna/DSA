class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(auto &x:nums){
            mp[x]++;
        }
        n = n/2;
        for(auto &x:mp){
            if(x.second > n) return x.first;
        }
        return 0;
    }
};