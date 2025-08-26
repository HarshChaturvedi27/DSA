class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double diagonal = INT_MIN;
        int area = INT_MIN;
        double maxi = INT_MIN;
        for(auto it : dimensions){
            diagonal = sqrt(it[0]*it[0] + it[1]*it[1]);
            if(diagonal > maxi) {
                maxi = diagonal;
                area = it[0]*it[1];
            } else if (diagonal == maxi){
                area = max(area, it[0]*it[1]);
            }
        }
        return area;
    }
};