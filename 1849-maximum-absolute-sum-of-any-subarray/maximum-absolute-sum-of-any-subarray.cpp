class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        int minisum=0;
        int maxisum=0;
        for(int i : nums){
            if(maxisum < 0){
                maxisum = 0;
            }
            maxisum += i;
            maxi=max(maxi,maxisum);

            if(minisum > 0){
                minisum = 0;
            }
            minisum += i;
            mini=min(mini,minisum);
        }
        return max(maxi, abs(mini));
    }
};