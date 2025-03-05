class Solution {
public:
    long long helper (int n){
        if (n==1) return 1;
        return ((2*n - 1) + helper(n-1));
    }
    long long coloredCells(int n) {
        if (n==1) return 1;
        long long count = helper(n-1);
        count = (2*n - 1) + 2 * count;
        return count;
    }
};