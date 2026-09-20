class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int result=0;
        for(auto &num:nums){
            mp[num]++;
        }
        for(auto &num:mp){
            if(num.second>1){
                result= num.first;
            }
        }
        return result;
    }
};