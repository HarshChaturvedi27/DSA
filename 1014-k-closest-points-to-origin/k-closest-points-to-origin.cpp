class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue <pair<double, pair<int,int>>> maxh;

        for (auto it : points){
            maxh.push({sqrt((it[0]*it[0]) + (it[1]*it[1])), {it[0],it[1]}});
            if (maxh.size() > k){
                maxh.pop();
            }
        }
        for (int i = 0; i < k; i++){
            ans.push_back({maxh.top().second.first, maxh.top().second.second});
            maxh.pop();
        }
        return ans;
    }
};