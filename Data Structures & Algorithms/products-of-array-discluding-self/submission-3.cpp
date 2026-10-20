class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol;
        int total = 1;
        int zeroed = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                total *= nums[i];
            } else {
                zeroed++;
            }
        }

        if (zeroed > 1) {
            sol.assign(nums.size(), 0);
        } else {
            for (int i = 0; i < nums.size(); ++i) {
                if (zeroed == 1) {
                    sol.push_back(nums[i] == 0 ? total : 0);
                } else {
                    sol.push_back(total/nums[i]);
                }
            }
        }

        return sol;
    }
};
