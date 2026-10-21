class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9] = {}, col[9] = {}, box[9] = {};
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') continue;
                int bit = 1 << (board[i][j] - '1');
                int b = (i / 3) * 3 + (j / 3);
                if ((row[i] | col[j] | box[b]) & bit) return false;
                row[i] |= bit;
                col[j] |= bit;
                box[b] |= bit;
            }
        }
        return true;
    }
};