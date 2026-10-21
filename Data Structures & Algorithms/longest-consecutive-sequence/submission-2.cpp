class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()) return 0;
        set<int> seen;

        for (int n : nums) {
            seen.insert(n);
        }

        int max = 0;
        int curr = 0;
        int last = *seen.begin();
        for (int n : seen) {
            if (n == last + 1) {
                cout << n << endl;
                curr++;
            } else {
                if (curr > max) max = curr;
                curr = 0;
            }
            last = n;
        }
        if (curr > max) max = curr;

        return ++max;
    }
};
