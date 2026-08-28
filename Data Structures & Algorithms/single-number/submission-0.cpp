class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        // a ^ a = a XOR a = 0
        // a ^ 0 = a XOR 0 = a
        for (int num: nums) {
            res ^= num;
        }
        return res;
    }
};
