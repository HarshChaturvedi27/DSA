class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int diff = 0;
        for (int i = 0 ; i < n - 1; i++){
            diff = abs(nums[i] - nums[i+1]);
            maxi = max(maxi, diff);
        }
        return max(maxi, abs(nums[0] - nums[n-1]));
    }
};