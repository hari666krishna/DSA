class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++){
            lsum += mat[i][i];
        }
        for(int i=0;i<n;i++){
            rsum += mat[i][n-1-i];
        }
        int total = lsum + rsum;
        if(n % 2 != 0){
            total -= mat[n/2][n/2];
        }

        return total;
    }
};