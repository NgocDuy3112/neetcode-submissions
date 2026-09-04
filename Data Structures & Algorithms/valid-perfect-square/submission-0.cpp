class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = num;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;
            if (sq > num) {
                right = mid - 1;
            } else if (sq < num) {
                left = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};