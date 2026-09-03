class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> mark(n, false);
        
        for (int num: nums) {
            mark[num - 1] = true;
        }
        vector<int> res;
        for (int i = 1; i <= n; i++) {
            if (!mark[i - 1]) res.push_back(i);
        }
        return res;
    }
};