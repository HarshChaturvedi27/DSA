class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int sum = 0;
        int i = 0, j = 1;
        while (i<nums.size()-1){
            if (nums[i] == k) cnt++;
            sum = nums[i] + nums[j];
            while (j<nums.size()){
                if (sum == k){
                    cnt++;
                }
                j++;
                if (j == nums.size()) break;
                sum = sum + nums[j];
            }
            i++;
            j = i+1;
        }
        if (nums[i] == k) cnt++;
        return cnt;
    }
};