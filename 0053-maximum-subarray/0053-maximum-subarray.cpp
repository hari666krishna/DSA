class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n  = nums.size();
        int sum = 0, mxsum = INT_MIN;
        for(int i=0; i<n; i++){
            sum += nums[i];
            mxsum = max(mxsum,sum);
            if (sum < 0){
                sum = 0;
            }
        }
        return mxsum;
    }
};