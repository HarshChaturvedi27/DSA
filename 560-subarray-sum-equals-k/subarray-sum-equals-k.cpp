class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> mpp;
        int prefixSum = 0;
        for (int i = 0; i < nums.size(); i++){
            prefixSum += nums[i];
            if (prefixSum == k) cnt++;
            // if (mpp.find(prefixSum - k) != mpp.end()) cnt++;
            for (auto it : mpp){
                if (it.first == prefixSum - k) cnt += it.second;
            }
            mpp[prefixSum]++;
        }
        return cnt;
    }
};