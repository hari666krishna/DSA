class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int mxlen = 0, sum = 0;
        unordered_map<int,int> freq;
        freq[0] = -1;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                sum += -1;
            }
            else{
                sum += 1;
            }
            if(freq.find(sum) != freq.end()){
                mxlen = max(mxlen, i-freq[sum]);
            }
            else{
                freq[sum] = i;
            }
        }
        return mxlen;
    }
};