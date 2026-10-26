class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = n;

        for (int i = 0; i < 16; ++i) {
            uint32_t t = n;
            if ((t >> i) & 1u) {
                rev |= (1u << (31-i));
            } else {
                rev &= ~(1u << (31-i));
            }

            t = n;
            if ((t >> (31-i)) & 1u) {
                rev |= (1u << i);
            } else {
                rev &= ~(1u << i);
            }
            
        }

        return rev;
    }
};
