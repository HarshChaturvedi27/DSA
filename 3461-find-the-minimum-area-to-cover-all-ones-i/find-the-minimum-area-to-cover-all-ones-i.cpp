class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int rowLow = n, colLow = m, rowHigh = 0, colHigh = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (grid[i][j] == 1){
                    rowLow = min(rowLow, i);
                    rowHigh = max(rowHigh, i);
                    colLow = min(colLow, j);
                    colHigh = max(colHigh, j);
                }
            }
        }
        return (rowHigh - rowLow + 1) * (colHigh - colLow + 1);
    }
};