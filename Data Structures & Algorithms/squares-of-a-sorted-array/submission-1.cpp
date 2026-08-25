class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // The input array is
        // [-4, -1, 0, 3, 10]
        vector<int> res;
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] * nums[left] > nums[right] * nums[right]) {
                res.push_back(nums[left] * nums[left]);
                left++;
            } else {
                res.push_back(nums[right] * nums[right]);
                right--;
            }
        }
        // Right now the res looks like:
        // [100, 16, 9, 1, 0]
        // We have to reverse the res array so the array is sorted in non-decreasing order
        reverse(res.begin(), res.end()); 
        return res;
    }
};