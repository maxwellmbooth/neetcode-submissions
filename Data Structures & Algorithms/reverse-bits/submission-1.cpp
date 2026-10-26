class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = n;

        for (int i = 0; i < 16; ++i) {
            if ((n >> i) & 1u) {
                rev |= (1u << (31-i));
            } else {
                rev &= ~(1u << (31-i));
            }

            if ((n >> (31-i)) & 1u) {
                rev |= (1u << i);
            } else {
                rev &= ~(1u << i);
            }
            
        }

        return rev;
    }
};
