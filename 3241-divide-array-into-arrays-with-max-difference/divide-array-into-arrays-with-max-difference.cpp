class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        // vector<vector<int>> vout;
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i += 3){
        //     vector<int> vin;
        //     vin = {};
        //     for (int j=0; j<3; j++){
        //         vin.push_back(nums[i+j]);
        //     }
        //     vout.push_back(vin);
        // }
        // for (int i = 0; i < nums.size()/3; i++){
        //     if ((vout[i][i+2] - vout[i][i]) > k){
        //         //vout.clear();
        //         return {};
        //     }
        // }
        // return vout;

        vector<vector<int>> vout;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 3){
            if (nums[i+2] - nums[i] > k){
                return {};
            } else {
                vout.push_back({nums[i] , nums[i+1], nums[i+2]});
            }   
        }
        return vout;
    }
};