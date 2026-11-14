class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> charCnt;

        for (const string& w : words) {
            for (char c : w) {
                charCnt[c]++;
            }
        }

        for (const auto& entry : charCnt) {
            if (entry.second % words.size() != 0) {
                return false;
            }
        }
        return true;
    }
};