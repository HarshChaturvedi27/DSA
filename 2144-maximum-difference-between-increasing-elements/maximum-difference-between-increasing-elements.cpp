class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        //brute n2
        // int maxi = -1;
        // for (int i = 0; i < nums.size() - 1; i++){
        //     for (int j = i + 1; j < nums.size(); j++){
        //         if (nums[i] >= nums[j]) continue;
        //         else maxi = max (maxi, nums[j] - nums[i]);
        //     }
        // }
        // return maxi;

        // optimal n
        int maxi = -1;
        int minEle = nums[0];
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] <= minEle) minEle = nums[j];
            else maxi = max (maxi, nums[j] - minEle);
        }
        return maxi;
    }
};