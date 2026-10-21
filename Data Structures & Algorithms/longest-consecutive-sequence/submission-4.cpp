class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int best = 0;
        for (int n : s) {
            if (s.count(n - 1)) continue;
            
            int c = 0;
            while (s.count(n + c)) ++c;
            if (best < c) best = c;
        }

        return best;
    }
};
