class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, maxi = 0;
        map <int, int> mpp;
        for (int r = 0; r < fruits.size(); r++){
            mpp[fruits[r]]++;
            if (mpp.size() > 2){
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0) {
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            maxi = max(maxi, r -l +1);
        }
        return maxi;
    }
};