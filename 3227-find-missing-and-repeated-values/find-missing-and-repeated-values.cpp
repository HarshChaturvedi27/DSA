class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> hash;
        int n = grid.size();
        vector<int> v;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                hash[grid[i][j]]++;
            }
        }
        for (auto& it : hash){
            if (it.second == 2){
                v.push_back(it.first);
                break;
            }
        }
        for (int i=1; i<=n*n; i++){
                if(hash.find(i) == hash.end()){
                    v.push_back(i);
                    break;
                }
        }
        return v;
        
    }
};