class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        for (string log: logs) {
            if (log == "../") {
                if (!stk.empty()) stk.pop();
            } else if (log != "./") {
                stk.push(log);
            }
        }
        return stk.size();
    }
};