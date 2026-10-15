class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;

        int j = 0;
        for (int i; i < nums.size(); ++i) {
            int diff = target-nums[i];
            nums_map.insert({nums[i], i});
            if (nums_map.count(diff)) {
                j = nums_map.at(diff);
                if (i == j) continue;
                return (i < j ? vector<int>{i, j} : vector<int>{j, i});
            }
        }
    }
};
