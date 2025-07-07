class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for (auto it: nums){
            mpp[it]++;
        }
        priority_queue<pair<int,int>> maxh;
        for (auto it: mpp){
            maxh.push({it.second, it.first});
        }
        vector<int> ans;
        for (int i = 0; i < k; i++){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};