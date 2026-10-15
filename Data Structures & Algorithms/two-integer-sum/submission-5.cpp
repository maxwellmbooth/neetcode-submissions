class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;

        for (int i = 0; i < nums.size(); ++i) {
            int diff = target-nums[i];
            nums_map.insert({nums[i], i});
            auto it = nums_map.find(diff);
            if (it != nums_map.end() && i != it->second) return vector<int>{it->second, i};
        }
        return {};
    }
};
