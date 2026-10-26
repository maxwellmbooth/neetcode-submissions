class Solution {
public:
    int missingNumber(vector<int>& nums) {
        uint32_t x = 0;
        for (int n : nums) {
            x ^= n;
        }

        uint32_t y = 0;
        for (uint32_t i = 0; i <= nums.size(); i++) {
            y ^= i;
        }

        if (y==x) {
            return 0;
        } else {
            return x^y;
        }

    }
};
