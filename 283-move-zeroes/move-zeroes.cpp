class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int trackZ = 0, trackNz = 0;
        while (trackNz < nums.size()){
            if (nums[trackNz] != 0){
                swap(nums[trackZ], nums[trackNz]);
                trackZ++;
            }
            trackNz++;
        }
    }
};