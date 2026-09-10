class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int ptr1 = 0, ptr2 = 0;
        int n1 = word1.length(), n2 = word2.length();
        while (ptr1 < n1 && ptr2 < n2) {
            res.push_back(word1[ptr1++]);
            res.push_back(word2[ptr2++]);
        }
        while (ptr1 < n1) res.push_back(word1[ptr1++]);
        while (ptr2 < n2) res.push_back(word2[ptr2++]);
        return res;
    }
};