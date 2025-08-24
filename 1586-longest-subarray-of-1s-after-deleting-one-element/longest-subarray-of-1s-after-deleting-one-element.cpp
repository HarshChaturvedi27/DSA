class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, r = 0;
        int n = nums.size();
        int cnt = 0;
        int maxi = 0;
        unordered_map<int, int> mpp;
        while(r < n){
            mpp[nums[r]]++;
            cnt++;
            while(mpp[0] > 1){
                cnt--;
                mpp[nums[l]]--;
                l++;
            }
            maxi = max(maxi, cnt - 1); // Subtract 1 because we must delete one element
            r++;
        }
        return maxi;
    }
};