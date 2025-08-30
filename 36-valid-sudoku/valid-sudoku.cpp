class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        unordered_set<char> s;
        
        // Check columns
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (board[i][j] == '.') continue;
                if (s.find(board[i][j]) != s.end()) {
                    return false;
                }
                s.insert(board[i][j]);
            }
            s.clear();
        }
        
        // Check rows
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '.') continue;
                if (s.find(board[i][j]) != s.end()) {
                    return false;
                }
                s.insert(board[i][j]);
            }
            s.clear();
        }

        // Check 3x3 sub-boxes - Simplified approach
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                for (int i = boxRow * 3; i < boxRow * 3 + 3; i++) {
                    for (int j = boxCol * 3; j < boxCol * 3 + 3; j++) {
                        if (board[i][j] == '.') continue;
                        if (s.find(board[i][j]) != s.end()) {
                            return false;
                        }
                        s.insert(board[i][j]);
                    }
                }
                s.clear();
            }
        }

        return true;
    }
};