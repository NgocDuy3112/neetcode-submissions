class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> tMatrix(cols, vector<int>(rows));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                tMatrix[j][i] = matrix[i][j];
            }
        }
        return tMatrix;
    }
};