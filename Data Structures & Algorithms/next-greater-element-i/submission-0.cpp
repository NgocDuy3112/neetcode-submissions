class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums1Idx;
        for (int i = 0; i < nums1.size(); i++) {
            nums1Idx[nums1[i]] = i;
        }
        vector<int> res(nums1.size(), -1);
        stack<int> stk;
        for (int num : nums2) {
            while (!stk.empty() && num > stk.top()) {
                int val = stk.top();
                stk.pop();
                int idx = nums1Idx[val];
                res[idx] = num;
            }
            if (nums1Idx.find(num) != nums1Idx.end()) {
                stk.push(num);
            }
        }
        return res;
    }
};