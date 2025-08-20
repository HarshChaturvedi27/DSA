class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int l = 0, r = 0;
        long long sum = 0;
        int n = nums.size();
        while(r < n){
            if(nums[r] == 0){
                sum += r - l + 1;
                r++;
                continue;
            } else {
                r++;
                l = r;
            }
        }
        return sum;
    }
};