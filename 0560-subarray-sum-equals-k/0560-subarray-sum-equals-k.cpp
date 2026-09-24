class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> snum;
        int sum = 0;
        int count = 0;
        snum[0] = 1;
        for (int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(snum.find(sum-k) != snum.end()){
                count += snum[sum-k];
            }
            snum[sum]++;
        }
        return count;
    }
};