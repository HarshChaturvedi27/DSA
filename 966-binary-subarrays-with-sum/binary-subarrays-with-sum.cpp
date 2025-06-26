// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {

//     // PREFIX SUM : O(n) O(n)
//         // unordered_map<int, int> prefixSumFreq;
//         // prefixSumFreq[0] = 1; // base case
//         // int sum = 0, count = 0;

//         // for (int num : nums) {
//         //     sum += num;
//         //     count += prefixSumFreq[sum - goal];
//         //     prefixSumFreq[sum]++;
//         // }
//         // return count;

        
//     }
// };

// SW : O(n), O(1)

class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int l = 0, sum = 0, count = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l++];
            }

            count += (r - l + 1);
        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};


