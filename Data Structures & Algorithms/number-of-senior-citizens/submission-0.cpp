class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0;
        for (const string& p: details) {
            if (stoi(p.substr(11, 2)) > 60) {
                res++;
            }
        }
        return res;
    }
};