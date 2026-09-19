class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = n+1;
        int start = 0, sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            while(sum >= target){
                ans = min(ans, i-start+1);
                sum -= nums[start];
                start++;
            }
        }
        if(ans > n){
            ans = 0;
        }
        return ans;
    }
};