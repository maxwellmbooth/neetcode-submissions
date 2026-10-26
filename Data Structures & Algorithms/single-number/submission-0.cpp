class Solution {
public:
    int singleNumber(vector<int>& nums) {
        uint32_t x = 0;

        for (int n : nums) {
            x ^= n;
        }

        return (int) x;
    }
};
