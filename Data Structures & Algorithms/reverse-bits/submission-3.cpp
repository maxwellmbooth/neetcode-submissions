class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;

        for (int i = 0; i < 32; ++i) {
            rev |= (((n >> i) & 1u) << (31-i));
        }

        return rev;
    }
};
