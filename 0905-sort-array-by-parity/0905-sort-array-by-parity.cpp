class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>final;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                final.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2!=0){
                final.push_back(nums[i]);
            }
        }
        return final;
    }
};