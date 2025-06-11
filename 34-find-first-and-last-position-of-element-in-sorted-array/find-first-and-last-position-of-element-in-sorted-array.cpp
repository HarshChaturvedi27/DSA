class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int floor = -1, ceil = -1;

        while (low <= high){
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target){
                //ceil = mid;
                high = mid - 1;
            } else low = mid + 1;
            if (nums[mid] == target) ceil = mid;
        }
        low = 0, high = n - 1;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target){
                //floor = mid;
                low = mid + 1;
            } else high = mid - 1;;
            if (nums[mid] == target) floor = mid;
        }
        return {ceil, floor};

    }
};