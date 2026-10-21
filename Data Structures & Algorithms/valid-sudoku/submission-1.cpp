class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> box_seen(9);
        vector<unordered_set<char>> col_seen(9);
        vector<unordered_set<char>> row_seen(9);
        int box = 0;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                int n = board[i][j];
                if (n == '.') continue;

                if (row_seen[i].count(n)) {
                    return false;
                } else {
                    row_seen[i].insert(n);
                }
                
                if (col_seen[j].count(n)) {
                    return false;
                } else {
                    col_seen[j].insert(n);
                }

                int box = (i / 3) * 3 + (j / 3);
                if (box_seen[box].count(n)) {
                    return false;
                } else {
                    box_seen[box].insert(n);
                }
            }
        }

        return true;
    }
};
