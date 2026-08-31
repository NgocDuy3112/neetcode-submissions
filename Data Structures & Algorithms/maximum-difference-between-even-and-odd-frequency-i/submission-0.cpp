class Solution {
public:
    int maxDifference(string s) {
        int ans = 0;
        vector<int> freq(26, 0);
        for (char c: s) {
            freq[c - 'a']++;
        }
        int oddMax = 0;
        int evenMin = s.length();
        for (int f: freq) {
            if (f & 1) {
                oddMax = max(oddMax, f);
            } else if (f > 0 ) {
                evenMin = min(evenMin, f);
            }
        }
        return oddMax - evenMin;
    }
};