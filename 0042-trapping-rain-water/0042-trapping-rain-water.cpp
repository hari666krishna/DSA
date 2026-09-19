class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int mx = height[0];
        vector<int>prefix(n);
        for(int i=0; i<n; i++){
            mx = max(mx, height[i]);
            prefix[i] = mx;
        }
        vector<int>suffix(n);
        mx = height[n-1];
        for(int i=n-1; i>=0; i--){
            mx = max(mx, height[i]);
            suffix[i] = mx;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            int lb = prefix[i];
            int rb = suffix[i];
            int wheight = min(lb, rb);
            ans += (wheight - height[i]);
        }
        return ans;
    }
};