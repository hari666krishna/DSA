class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int num:arr){
            if(num<=k){
                k++;
            }
            else
                break;
        }   
        return k;
    }
};