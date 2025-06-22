// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         unordered_map <char, int> mpp;
//         int l = 0, maxi = INT_MIN;
//         for (int r = 0; r < s.size(); r++){
//             mpp[s[r]]++;
//             if (mpp['A'] > k && mpp['B'] > k){
//                 mpp[s[l]]--;
//                 l++;
//             }
//             maxi = max(maxi, r -l +1);
//         }
//         return maxi;
//     }
// };
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left = 0;
        int max_len = 0;
        int max_count = 0;  
        
        for (int right = 0; right < s.size(); right++) {
            count[s[right]]++;
            max_count = max(max_count, count[s[right]]);
            
            while (right - left + 1 - max_count > k) {
                count[s[left]]--;
                left++;
            }
            
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};