class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int total = 0;

        auto h = [&](int i) { return (i < 0 || i >= n) ? 0 : height[i]; };

        vector<int> lmax(n);
        vector<int> rmax(n);

        int l = 1;
        lmax[0] = 0;
        while (l < n) {
            lmax[l] = max(lmax[l-1], h(l-1));
            ++l;
        }
        
        l = n-2;
        rmax[n-1] = 0;
        while (l > 0) {
            rmax[l] = max(rmax[l+1], h(l+1));
            --l;
        }

        l = 0;
        while (l < n) {
            if (rmax[l] > h(l) && lmax[l] > h(l)) {
                total += min(rmax[l], lmax[l]) - h(l);
            }
            ++l;
        }

        return total;
    }
};
