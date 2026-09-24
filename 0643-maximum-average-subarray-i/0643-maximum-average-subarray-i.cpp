class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double ans = 0.0, mxavg = 0.0,sum = 0;
        for(int i =0; i<k; i++){
            sum += nums[i];
        }
        mxavg = sum / k;
        for(int i=k; i<n; i++){
            sum += nums[i];
            sum -= nums[i-k];
            ans = sum / k;
            mxavg = max(mxavg, ans);
        }
        return mxavg;
    }
};