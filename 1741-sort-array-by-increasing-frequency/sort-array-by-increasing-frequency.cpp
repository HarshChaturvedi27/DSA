class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map<int,int> mpp;

        for (auto it : nums) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            minh.push({it.second, -it.first}); // Using negative to handle descending order for same frequency
            // num = it.first
            // freq of num = it.second
        }
        while (minh.size()) {
            for (int i = 0; i < minh.top().first; i++) { // freq of num = minh.top().first
                ans.push_back(-minh.top().second); // Convert back to positive // num = minh.top().first
            }
            minh.pop();
        }
        return ans;
    }
};