class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        unordered_set<int> s;
        for (auto it : nums){
            if (it > 0 && s.find(it) == s.end()){
                sum += it;
                s.insert(it);
            }
        }
        if (sum == 0){
            sum = INT_MIN;
            for (auto it : nums){
                sum = max(sum,it);
            }
        }
        return sum;

    }
};