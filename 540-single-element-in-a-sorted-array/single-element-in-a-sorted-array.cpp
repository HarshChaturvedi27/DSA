class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            return nums[0];
        } else if (nums[0] != nums[1]) return nums[0];
        else if (nums[n-1] != nums[n-2]) return nums[n-1];

        int l = 1 , h = nums.size() - 2;

        
        
        while (l <= h){
            int a = (l + h) / 2 , m = (l + h) / 2;
            if (nums[m-1] != nums[m] && nums[m+1] != nums[m]) return nums[m];

            if (nums[m-1] == nums[m]) a--;
            if (a % 2 == 0){
                l = m + 1;
            } else h = m - 1;
        }
        
        
        return 0;
    }
};