class Solution {
public:
    vector<vector<string>> ans;

    bool issafe(vector<vector<int>>& board, int row, int col, int n) {
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 1)
                return false;
        }
        for (int r = row - 1, c = col - 1; r >= 0 && c >= 0; r--, c--) {
            if (board[r][c] == 1)
                return false;
        }

        for (int r = row - 1, c = col + 1; r >= 0 && c < n; r--, c++) {
            if (board[r][c] == 1)
                return false;
        }

        return true;
    }

    void back(vector<vector<int>>& board, vector<string>& curr, int row,
              int n) {
        if (row == n) {
            ans.push_back(curr);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (issafe(board, row, col, n)) {
                board[row][col] = 1;
                string s(n, '.');
                s[col] = 'Q';
                curr.push_back(s);
                back(board, curr, row + 1, n);
                curr.pop_back();
                board[row][col] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<string> curr;
        back(board, curr, 0, n);
        return ans;
    }
};