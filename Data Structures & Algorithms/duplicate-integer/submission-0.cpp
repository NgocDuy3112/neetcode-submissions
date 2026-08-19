class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> dict;
        for (int num: nums) {
            dict[num]++;
        }
        for (auto &ele: dict) {
            if (ele.second > 1) {
                return true;
            }
        }
        return false;
    }
};