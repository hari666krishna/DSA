class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        long long sum = 0, ans = 0;
        int start = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            freq[nums[i]]++;
            if(i-start+1 > k){
                sum -= nums[start];
                freq[nums[start]]--;

                if(freq[nums[start]] == 0){
                    freq.erase(nums[start]);
                }
                start++;
            }
            if(i-start+1 == k && freq.size() == k){
                ans = max(sum,ans);
            }
        }
        return ans;
    }
};