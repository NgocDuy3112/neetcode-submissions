class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        res.reserve(2 * n);
        for (const int& num: nums) {
            res.push_back(num);
        }
        for (int i = n; i < 2*n; i++) {
            res.push_back(nums[i - n]);
        }
        return res;
    }
};