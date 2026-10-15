class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;

        unordered_map<int, int> freq;
        for (int n : nums) freq[n]++;
        
        vector<pair<int,int>> freq_vec(freq.begin(), freq.end());
        sort(freq_vec.begin(), freq_vec.end(), [](auto& a, auto& b) {return a.second > b.second;});

        for (int i = 0; i < k; i++) {
            res.push_back(freq_vec[i].first);
        }

        return res;
    }
};