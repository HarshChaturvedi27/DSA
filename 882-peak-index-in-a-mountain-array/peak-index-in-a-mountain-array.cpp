class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1) return 0;
        else {
            if (nums[1] < nums[0]) return 0;
            else if (nums[n-1] > nums[n-2]) return n-1;
        }

        int l = 1 , h = nums.size() - 2;
        while (l<=h){
            int m = (l + h) / 2;
            if (nums[m] > nums[m-1] && nums[m] > nums[m+1]) return m;

            if (nums[m] < nums[m+1]){
                l = m + 1;
            } else h = m - 1;
        }
        return 0;
    }
};