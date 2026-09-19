class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2){
            return 0;
        }
        vector<bool>prime(n,true);
        prime[0]=prime[1]=false;
        
        for(long long i=3;i*i<n;i+=2){
            if(prime[i]){
                for(long long j=i*i;j<n;j+=2*i){
                    prime[j]=false;
                }
            }
        }
        int count =1;
        for(long long i=3;i<n;i+=2){
            if(prime[i])count++;
        }

        return count;
    }
};