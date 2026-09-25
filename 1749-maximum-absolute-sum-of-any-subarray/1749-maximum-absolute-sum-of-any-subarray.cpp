class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int largest = INT_MIN;
        int smallest = INT_MAX; 
        int absmx = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            largest = max(largest,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            smallest = min(smallest,sum);
            if(sum > 0){
                sum = 0;
            }
        }     

        return absmx = max(abs(largest),abs(smallest));
    }
};