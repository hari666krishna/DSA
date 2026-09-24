class Solution {
public:
    int minEatingSpeed(vector<int>& piles, long long h) {
        int n = piles.size();
        int mx = piles[0];
        for(int i=0;i<n;i++){
            mx = max(mx, piles[i]);
        }
        int start = 1, end = mx, ans = end;
        while(start <= end){
            int mid = (start + end)/2;
            long long tot = 0;
            for(int i=0;i<n;i++){
                tot += (piles[i] / mid);
                if(piles[i] % mid != 0) tot++;
            }
            if(tot <= h){
                ans = mid;
                end = mid-1;
            }else{
                start = mid + 1;
            }
        } 
        return ans;
    }
};