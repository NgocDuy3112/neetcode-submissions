class Solution {
public:
    int calPoints(vector<string>& operations) {
        int res = 0;
        stack<int> stk;
        for (const string& op: operations) {
            if (op == "+") {
                int top = stk.top();
                stk.pop();
                int newTop = top + stk.top();
                stk.push(top);
                stk.push(newTop);
                res += newTop;
            } else if (op == "D") {
                stk.push(2 * stk.top());
                res += stk.top();
            } else if (op == "C") {
                res -= stk.top();
                stk.pop();
            } else {
                stk.push(stoi(op));
                res += stk.top();
            }
        }
        return res;
    }
};