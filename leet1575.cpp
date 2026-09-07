class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            count += mat[i][i];                 // primary
            count += mat[i][n - 1 - i];         // secondary

            if(i == n - 1 - i) {
                count -= mat[i][i];             // centre ko ek baar hatao
            }
        }

        return count;
    }
};
