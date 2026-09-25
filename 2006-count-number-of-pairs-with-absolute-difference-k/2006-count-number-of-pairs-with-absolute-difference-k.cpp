class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int>mp;
        int count =0;
        for(int i=0;i<nums.size();i++){
            int y1 = k + nums[i];
            if(mp.find(y1)!=mp.end()){
                count+=mp[y1];
            }
            int y2=nums[i]-k;
            if(mp.find(y2)!=mp.end()){
                count+=mp[y2];
            }
            mp[nums[i]]++;
        }

        return count;
    }
};