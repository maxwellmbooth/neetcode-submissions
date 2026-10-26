class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sol(n+1);
        sol[0] = 0;

        for (int i = 0; i <= n; ++i) {
            sol[i] = sol[i >> 1] + (i & 1);
        }

        return sol;
    }
};
