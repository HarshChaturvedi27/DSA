class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        if (nums.size() == 1) return nums[0];
        int a = INT_MAX;
        while (low <= high){
            int mid = (low + high) / 2;
            
            if (nums[mid] >= nums[high]){
                low = mid + 1;
            } else high = mid;
            a = nums[mid];
        }
        return a;
    }
};