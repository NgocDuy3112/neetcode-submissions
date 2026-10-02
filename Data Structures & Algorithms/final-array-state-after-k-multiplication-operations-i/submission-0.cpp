class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        vector<int> res = nums;

        auto compare = [&](int i, int j) {
            if (res[i] != res[j]) return res[i] > res[j];
            return i > j;
        };

        priority_queue<int, vector<int>, decltype(compare)> minHeap(compare);

        for (int i = 0; i < n; i++) minHeap.push(i);

        for (int _ = 0; _ < k; _++) {
            int i = minHeap.top();
            minHeap.pop();
            res[i] *= multiplier;
            minHeap.push(i);
        }
        return res;
    }
};