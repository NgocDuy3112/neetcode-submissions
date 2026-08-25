class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const int&a, const int&b) {
            return abs(a) < abs(b);
        });
        vector<int> res;
        for (const int& num : nums) {
            res.push_back(num * num);
        }
        return res;
    }
};