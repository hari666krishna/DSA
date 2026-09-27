class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n = nums.size();
        int mn = nums[0], mx = nums[0];
        for (int i = 0; i < n; i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        int start = mn, end = mx, mid = (start + end) / 2, ans = end;
        while (start <= end) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] > mid)
                    continue;
                count++;
                i++;
            }
            if (count >= k) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
            mid = (start + end) / 2;
        }
        return ans;
    }
};