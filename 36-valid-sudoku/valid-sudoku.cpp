class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        unordered_set<char> s;
        for (int j = 0; j < m; j++){
            for (int i = 0; i < n; i++){
                if(s.find(board[i][j]) != s.end()){
                    return false;
                } else {
                    if (board[i][j] != '.') s.insert(board[i][j]);
                }
            }
            s.clear();
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(s.find(board[i][j]) != s.end()){
                    return false;
                } else {
                    if (board[i][j] != '.') s.insert(board[i][j]);
                }
            }
            s.clear();
        }

        int cnti = 3, cntj = 3;
        int i1 = 0, j1 = 0;
        
        for (int box = 0; box < 9; box++) {
            for (int i = i1; i < i1 + 3; i++) {
                for (int j = j1; j < j1 + 3; j++) {
                    if (board[i][j] == '.') continue;
                    if (s.find(board[i][j]) != s.end()) {
                        return false;
                    }
                    s.insert(board[i][j]);
                }
            }
            s.clear();
            
            // Update indices for next sub-box
            j1 += 3;
            if (j1 >= m) {
                j1 = 0;
                i1 += 3;
            }
        }

        //incorrect
        // int cnti = 3, cntj = 3;
        // int i1= 0, j1 = 0;
        // for (int i = i1; i < n/cnti && i < n; i++){
        //     for (int j = j1; j < m/cntj && j < m; j++){
        //         if(s.find(board[i][j]) != s.end()){
        //             return false;
        //         } else {
        //             if (board[i][j] != '.') s.insert(board[i][j]);
        //         }
        //         if (j == m/cntj - 1 && i == n/cnti - 1 && j != m-1){
        //             j1 = m/cntj;
        //             cntj--;
        //             i = i1;
        //         }
        //         if (j == m-1 && i == n/cnti - 1){  // auto-handles if (j == m-1 && i == n/cnti - 1 && i != n-1) and 
        //             i1 = n/cnti;                    // if (j == m-1 && i == n-1) break;
        //             cnti--;
        //             j = 0; cntj = 3;
        //         }
        //     }
        //     s.clear();
        // }

        return true;
    }
};