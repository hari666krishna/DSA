class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<4;i++){
            if(mat==target){
                return true;
            }
            vector<vector<int>> fmatrix(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    fmatrix[j][n-1-i]=mat[i][j];
                }
            }
            mat=fmatrix;
        }

        return false;
    }
};