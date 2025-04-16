class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        //better
        // if (nums.size() == 0) return 0;
        // int maxi = INT_MIN;
        // int count = 1;
        // sort(nums.begin(), nums.end());
        // for (int i=0; i<nums.size() -1; i++){
        //     if (nums[i+1] == nums[i]) continue;
        //     else if (nums[i+1] == nums[i] + 1){
        //         count++;
        //         maxi = max(count, maxi);
        //     } else {                
        //         count = 1;
        //     }
        // }
        // maxi = max(count, maxi);
        // return maxi;

        //optimal
        if (nums.size() == 0) return 0;

        int maxi = INT_MIN;
        int currCnt = 0;
        int start  = 0;
        unordered_set<int> s;
        for (int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for (auto it : s){
            if (s.find( it - 1) == s.end()){
                start = it;
                currCnt = 1;
                while (s.find(start + 1) != s.end()){
                    currCnt++;
                    start++;
                }
                maxi = max(maxi, currCnt);
            }
        }
        return maxi;
    }
};