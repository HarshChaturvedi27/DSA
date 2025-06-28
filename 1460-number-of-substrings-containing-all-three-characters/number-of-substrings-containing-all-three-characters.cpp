// space O(n)
// class Solution {
// public:

//     int minSubs(string& s, int k){
//         unordered_map<char, int> mpp;
//         int l = 0, r = 0, cnt = 0;
//         while (r < s.size()){
//             mpp[s[r]]++;
//             while (mpp.size() > k){
//                 mpp[s[l]]--;
//                 if (mpp[s[l]] == 0) mpp.erase(s[l]);
//                 l++;
//             }
//             cnt += (r -l +1);
//             r++;
//         }
//         return cnt;
//     }

//     int numberOfSubstrings(string s) {
//         int ans = minSubs(s, 3) - minSubs(s, 2);
//         return ans;
//     }
// };

// space O(1)
class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr[3] = {-1, -1, -1};
        int r = 0, cnt = 0;
        while (r < s.length()){
            arr[s[r] - 'a'] = r; // update last seen index of current char
            int minIdx = INT_MAX;
            for (int i = 0; i < 3; i++){
                minIdx = min(minIdx, arr[i]);
            }
            cnt += minIdx + 1;
            r++;
        }
        return cnt;
    }
};