class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // repeatedNum - missingNum = gridSum - sumFrom1ToN
        // repeatedNum^2 - missingNum^2 = gridSum^2 - sumFrom1ToN^2
        int n = grid.size();
        long long sumFromOneToN = 1LL * n * n * (n * n + 1) / 2;
        long long sumSquareFromOneToN = 1LL * n * n * (n * n + 1) * (2 * n * n + 1) / 6;

        long long sumGrid = 0;
        long long sumSquareGrid = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sumGrid += grid[i][j];
                sumSquareGrid += 1LL * grid[i][j] * grid[i][j];
            }
        }

        long long diff = sumGrid - sumFromOneToN;
        long long diffSquare = sumSquareGrid - sumSquareFromOneToN;
        long long sum = diffSquare / diff;
        
        int repeatedNum = (sum + diff) / 2;
        int missingNum = sum - repeatedNum;

        return {repeatedNum, missingNum};
    }
};