class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) return {{}};

        vector<vector<string>> sol;
        unordered_map<string, int> seen = {};
        
        int i = 0;
        for (string& s : strs) {
            string ss = s;
            sort(ss.begin(), ss.end());
            auto it = seen.find(ss);
            if (it != seen.end()) {
                sol[it->second].push_back(s);
            } else {
                sol.push_back(vector<string>{s});
                seen.insert({ss, i++});
            }
        }
        return sol;
    }
};
