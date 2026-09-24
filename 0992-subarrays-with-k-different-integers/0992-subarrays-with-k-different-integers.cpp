class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
    int atMost(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int end = 0, ans = 0;
        for (int start = 0; start < nums.size(); start++) {
            freq[nums[start]]++;
            while (freq.size() > k) {
                freq[nums[end]]--;
                if (freq[nums[end]] == 0) {
                    freq.erase(nums[end]);
                }
                end++;
            }
            ans += start - end + 1;
        }
        return ans;
    }
};