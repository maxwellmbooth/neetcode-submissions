class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        int count[26] = {};
        for (char c : s) count[c-'a']++;

        for (char c : t) {
            if (!count[c-'a']) {
                return false;
            } else {
                count[c-'a']--;
            }
        }
        return true;
    }
};
