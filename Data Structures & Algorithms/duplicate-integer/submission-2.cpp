class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (!nums.size()) return false;

        vector<int> ns = nums;
        sort(ns.begin(), ns.end());

        for (int i = 0; i < ns.size() - 1; ++i) {
            if (ns[i] == ns[i+1]) return true;
        }
        return false;
    }
};