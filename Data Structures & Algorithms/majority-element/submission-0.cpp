class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int count = 1;
        int count_another = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == ans) {
                count++;
            }
            else {
                count_another++;
            }
            if (count_another > count) {
                count = count_another;
                ans = nums[i];
            }
        }
        return ans;
    }
};