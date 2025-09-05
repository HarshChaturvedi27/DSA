// Optimal n, 1
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        
        return count <= 1;
    }
};


// Correct n log n, n

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> copy = nums;
//         sort (copy.begin(), copy.end());
//         int x = 0;
//         for (int i = 0; i < n - 1; i++){
//             if (nums[i] > nums[i+1]) {
//                 x = i+1; break;
//             }
//         }
//         for (int i = 0; i < n; i++){
//             if (copy[i] != nums[(i+x) % n]) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };