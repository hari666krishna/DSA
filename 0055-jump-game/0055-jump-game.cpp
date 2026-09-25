class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx = 0, target = nums.size()-1;
        for(int i =0; i<nums.size(); i++){
            if(i > idx) return false;
            idx = max(idx, i+nums[i]);
            if(idx >= target) return true;
        }
        return false;
    }
};