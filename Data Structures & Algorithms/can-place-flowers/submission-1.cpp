class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        vector<int> padFlowerbed(m + 2, 0);
        for (int i = 0; i < m; i++) {
            padFlowerbed[i + 1] = flowerbed[i];
        }
        for (int i = 1; i < padFlowerbed.size() - 1; i++) {
            if (padFlowerbed[i - 1] == 0 && padFlowerbed[i] == 0 && padFlowerbed[i + 1] == 0) {
                padFlowerbed[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};