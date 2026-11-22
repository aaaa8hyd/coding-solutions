class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // Number of original rows
        int n = matrix[0].size();    // Number of original columns
        
        // Initialize the transposed matrix with dimensions n x m
        vector<vector<int>> result(n, vector<int>(m));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[j][i] = matrix[i][j];
            }
        }
        
        return result;
    }
};
