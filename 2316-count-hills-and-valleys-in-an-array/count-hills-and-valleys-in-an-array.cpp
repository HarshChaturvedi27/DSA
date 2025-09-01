class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        // First, remove consecutive duplicates
        vector<int> arr;
        arr.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i-1]) {
                arr.push_back(nums[i]);
            }
        }
        
        int cnt = 0;
        int m = arr.size();
        for (int i = 1; i < m-1; i++) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) { // Hill
                cnt++;
            } else if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) { // Valley
                cnt++;
            }
        }
        return cnt;
    }
};

// class Solution {
// public:
//     int countHillValley(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0, k = 2;
//         int cnt = 0;
//         set<int> s;
//         for (int j = 1; j < n-1; j++){
//             if (nums[i] == nums[j]){
//                 k++;
//                 continue;
//             }
//             if (nums[j] == nums[k]){
//                 j--; k++;
//                 continue;
//             }
//             if (nums[i] < nums[j] && nums[j] > nums[k] && s.find(nums[j]) == s.end()){
//                 cnt++; i++; k++;
//                 s.insert(nums[j]);

//             } else if (nums[i] > nums[j] && nums[j] < nums[k] && s.find(nums[j]) == s.end()){
//                 cnt++; i++; k++;
//                 s.insert(nums[j]);
//             } else{
//                 i++; k++;
//             }
//         }
//         return cnt;
//     }
// };