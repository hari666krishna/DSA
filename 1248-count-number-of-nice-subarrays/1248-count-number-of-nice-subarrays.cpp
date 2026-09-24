class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int oddCount = 0, ans = 0;
        for(int num:nums){
            if(num % 2!=0){
                oddCount++;
            }
            if(mp.find(oddCount - k) != mp.end()){
                ans += mp[oddCount-k];
            }
            mp[oddCount]++;
        }
        return ans;
    }
};