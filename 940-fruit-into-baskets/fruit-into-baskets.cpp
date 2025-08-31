class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0, r = 0;
        int cnt = 0, maxi = INT_MIN;
        unordered_map<int, int> mpp;
        while (r < n){
            mpp[fruits[r]]++;
            while (mpp.size() > 2){
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            cnt = r - l + 1;
            maxi = max(maxi, cnt);
            r++;
        }
        return maxi;
    }
};