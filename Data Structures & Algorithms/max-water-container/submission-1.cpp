class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int best = 0;

        while (l < r) {
            int v = min(heights[l], heights[r]) * (r-l);
            best = max(best, v);

            if (heights[l] < heights[r]) ++l;
            else if (heights[r] < heights[l]) --r;
            else {++l; --r;}
        }
        return best;
    }
};
