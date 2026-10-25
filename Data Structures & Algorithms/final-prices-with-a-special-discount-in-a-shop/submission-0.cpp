class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        int n = prices.size();
        vector<int> res = prices;
        for (int i = 0; i < n; i++) {
            while (!stk.empty() && prices[stk.top()] >= prices[i]) {
                res[stk.top()] -= prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        return res;
    }
};
