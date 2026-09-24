class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(), mx = weights[0], sum = 0;
        for(int i=0;i<n;i++){
            mx = max(mx, weights[i]);
            sum += weights[i];
        }
        int start = mx, end = sum, ans = end;
        while(start <= end){
            int mid = (start+end)/2;
            int tot = 1, csum = 0;
            for(int i=0;i<n;i++){
                csum += weights[i];
                if(csum > mid){
                    tot++;
                    csum = weights[i];
                }
            }
            if(tot <= days){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }
};