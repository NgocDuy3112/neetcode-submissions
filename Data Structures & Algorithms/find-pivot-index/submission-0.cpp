class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int res = -1;
        // prefixSum = [0, ..., 0]
        vector<int> prefixSum(nums.size() + 2, 0);
        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            int leftSum = prefixSum[i - 1];
            int rightSum = (i == n) ? prefixSum[n + 1] : (prefixSum[n] - prefixSum[i]);
            if (leftSum == rightSum) {
                res = i - 1;
                break;
            }
        }
        return res;
    }
};