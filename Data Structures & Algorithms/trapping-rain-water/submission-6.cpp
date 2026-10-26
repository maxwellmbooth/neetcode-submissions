class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int total = 0;

        int lmax = 0, rmax = 0;
        int l = 0, r = n - 1;

        while (l <= r) {
            if (lmax <= rmax) {
                lmax = max(lmax, height[l]);
                total += lmax - height[l];
                ++l;
            } else {
                rmax = max(rmax, height[r]);
                total += rmax - height[r];
                --r;
            }
        }

        return total;
    }
};
