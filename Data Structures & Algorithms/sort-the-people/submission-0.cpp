class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<string, int>> people(n);
        
        for (int i = 0; i < n; i++) {
            people[i] = {names[i], heights[i]};
        }
        
        sort(people.begin(), people.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second;
        });
        
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = people[i].first;
        }
        
        return res;
    }
};