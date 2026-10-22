class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> sol;

        sort(nums.begin(), nums.end());

        int ip = 0;
        for (int i = 0; i < n; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int l = i + 1, r = n - 1;

            while (l < r) {
                if (nums[l] + nums[r] == -nums[i]) {
                    sol.push_back({nums[l], nums[r], nums[i]});
                    ++l;
                    --r;
                    while (l < r && nums[l] == nums[l - 1]) ++l;
                    while (l < r && nums[r] == nums[r + 1]) --r;
                } else if (nums[l] + nums[r] > -nums[i]) {
                    --r;
                } else {
                    ++l;
                }
            }
        }

        return sol;
    }
};
