// PREFIX SUM O(n), O(n)

class Solution {
public:
    int subCount(vector<int>& nums, int k){
        int cnt = 0, temp = 0, l = 0, r = 0;
        if (k < 0) return 0;
        while (r < nums.size()){
            if (nums[r] % 2 != 0) temp++;
            while (temp > k){
                if (nums[l] % 2 != 0) temp--;
                l++;
            }
            cnt += (r -l +1);
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = subCount(nums, k) - subCount(nums, k-1);
        return ans;
    }
};


// PREFIX SUM O(n), O(n)
// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         unordered_map<int, int> prefixCount;
//         prefixCount[0] = 1;
//         int count = 0, prefix = 0;

//         for (int num : nums) {
//             prefix += num % 2;
//             count += prefixCount[prefix - k];
//             prefixCount[prefix]++;
//         }

//         return count;
//     }
// };
