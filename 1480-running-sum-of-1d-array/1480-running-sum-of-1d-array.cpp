class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res+=nums[i];
            nums[i]=res;
        }
        return nums;
    }
};