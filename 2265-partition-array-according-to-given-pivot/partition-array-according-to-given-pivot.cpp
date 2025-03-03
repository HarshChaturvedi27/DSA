class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> vtr;
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] < pivot ){
                vtr.push_back(nums[i]);
                //continue;
            }
        }
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] == pivot ){
                vtr.push_back(nums[i]);
                //continue;
            }
        }
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] > pivot ){
                vtr.push_back(nums[i]);
                //continue;
            }
        }
        return vtr;
    }
};