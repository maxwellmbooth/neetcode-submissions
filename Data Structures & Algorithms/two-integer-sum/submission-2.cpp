class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;
        for (int i; i < nums.size(); ++i) nums_map.insert({nums[i], i});

        int j = 0;
        for (int i; i < nums.size(); ++i) {
            if (nums_map.count(target-nums[i])) {
                j = nums_map.at(target-nums[i]);
                if (i == j) continue;
                return (i < j ? vector<int>{i, j} : vector<int>{j, i});
            }
        }
    }
};
