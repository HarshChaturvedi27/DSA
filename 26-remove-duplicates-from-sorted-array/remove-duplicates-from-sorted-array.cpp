class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1, duplicate = 0;
        while (unique < nums.size()){
            if (nums[unique] != nums[duplicate]){
                duplicate++;
                swap(nums[unique], nums[duplicate]);
            }
            unique++;
        }
        return duplicate + 1;
    }
};