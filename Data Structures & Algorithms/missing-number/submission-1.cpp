class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        uint32_t x = 0;
        uint32_t y = n;

        for (uint32_t i = 0; i < n; i++) {
            x ^= nums[i];
            y ^= i;
        }

        return x^y;

    }
};
