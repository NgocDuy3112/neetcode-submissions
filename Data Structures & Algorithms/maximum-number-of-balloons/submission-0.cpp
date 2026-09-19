class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for (char c: text) {
            mp[c]++;
        }
        unordered_map<char, int> balloon = {
            {'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}
        };

        int res = text.length();
        for (auto& element: balloon) {
            res = min(res, mp[element.first] / element.second);
        }
        return res;
    }
};