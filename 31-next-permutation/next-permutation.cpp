class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int bp = -1;
        for (int i = n-2; i >= 0; i--){ //O(n)
            if (nums[i] < nums[i+1]){
                bp = i;
                break;
            }
        }
        if (bp == -1){
            reverse(nums.begin(), nums.end()); //O(n) worst case
        } else{
            for (int i = n-1; i > bp; i--){ //O(n)
                if (nums[bp] < nums[i]){
                    swap(nums[bp], nums[i]);
                    break;
                }
            }
            reverse(nums.begin() + 1 + bp, nums.end()); //O(n) worst case
        }        
    }
};

// optimal - 2p - O(3n) worst case