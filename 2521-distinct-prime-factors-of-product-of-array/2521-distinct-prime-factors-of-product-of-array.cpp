class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int>primeFact;
        for(int num:nums){
            for(int i=2;i*i<=num;i++){
                while(num % i ==0){
                    primeFact.insert(i);
                    num /= i;
                }
            }
            if(num>1){
                primeFact.insert(num);
            }
        }
        return primeFact.size();
    }
};