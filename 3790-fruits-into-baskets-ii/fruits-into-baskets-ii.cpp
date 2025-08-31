class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<int> copyb = baskets;
        for (int i = 0; i < n; i++){
            for (auto it : copyb){
                if (fruits[i] <= it){
                    copyb.erase(find(copyb.begin(), copyb.end(), it));
                    break;
                }
            }
        }
        return copyb.size();
    }
};