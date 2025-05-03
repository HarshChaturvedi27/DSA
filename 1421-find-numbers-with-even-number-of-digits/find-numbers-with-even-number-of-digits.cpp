class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i=0; i<nums.size(); i++){
            int a = nums[i];
            int count = 0;
            while (a > 0){
                count++;
                a = a/10;
            }
            if (count%2 == 0) ans++;
        }
        return ans;
    }
};