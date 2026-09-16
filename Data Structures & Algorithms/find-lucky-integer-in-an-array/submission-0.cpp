class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int num : arr) {
            count[num]++;
        }
        int res = -1;
        for (auto& [num, freq]: count) {
            if (num == freq) res = max(res, num);
        }
        return res;
    }
};