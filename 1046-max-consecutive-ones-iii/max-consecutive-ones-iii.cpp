class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, cnt=0, a=k;
        for (int r=0; r<nums.size(); r++){
            if (nums[r] == 1){
                cnt = max(cnt, r-l+1);
            } else if (nums[r] == 0 && a > 0) {
                a--;
                cnt = max(cnt, r-l+1);
            } else if (a==0){
                for ( int i=l; i<=r; i++){
                    if (nums[i] == 0) {
                        l = i+1;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};