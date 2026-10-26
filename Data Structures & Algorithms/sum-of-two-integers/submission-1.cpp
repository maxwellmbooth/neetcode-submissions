class Solution {
public:
    int getSum(int a, int b) {
        uint32_t x = a, y = b;
        while (y != 0) {
            uint32_t c = (x & y) << 1;
            x ^= y;
            y = c;
        }
        return (int) x;
    }
};
