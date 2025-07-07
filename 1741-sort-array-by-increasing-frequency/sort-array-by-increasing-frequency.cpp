class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        priority_queue <pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map<int,int> mpp;

        for (auto it : nums){
            mpp[it]++;
        }
        for (auto it : mpp){
            minh.push({it.second, -it.first}); // use '-' for taking greater ele above after converting back in minh when freq==
            // num = it.first
            // freq of num = it.second
            // push(freq, num) coz we need to sort acc to freq
        }
        while (minh.size()){
            for (int i = 0; i < minh.top().first; i++){
                ans.push_back(-minh.top().second); // convert '-' back to original
            }
            minh.pop();
        }
        return ans;
    }
};