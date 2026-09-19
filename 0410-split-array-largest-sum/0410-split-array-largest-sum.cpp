class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = nums[0], sum = 0;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            sum += nums[i];
        }
        int start = mx, end= sum, ans = end;
        while(start <= end){
            int mid = (start + end)/2;
            int tot = 1, csum = 0;
            for(int i=0; i<n; i++){
                csum += nums[i];
                if(csum > mid){
                    tot++;
                    csum = nums[i];
                }
            }
            if(tot <= k){
                ans = mid;
                end = mid -1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};