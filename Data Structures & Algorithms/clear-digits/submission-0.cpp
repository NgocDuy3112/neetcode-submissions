class Solution {
public:
    string clearDigits(string s) {
        string stk;
        for (char c: s) {
            if (c >= '0' && c <= '9') stk.pop_back();
            else stk.push_back(c);
        }
        return stk;
    }
};
