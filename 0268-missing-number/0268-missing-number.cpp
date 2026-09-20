class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(auto &x : nums){
            mp[x]++;
        }
        int result;
        for(int i=0;i<=n;i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        return result;
    }
};