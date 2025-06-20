class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int maxi = 0, cnt = 0;
        // unordered_map <char, int> mpp;
        // string a;
        // for (auto it : s){
        //     mpp[it]++;
        //     if (mpp[it] == 2){
        //         int idx = a.find(it);
        //         for (int i = 0; i <= idx; i++){
        //             mpp[a[i]]--;
        //         }
        //         a.erase(0, idx +1);
        //     }
        //     a += it;
        //     cnt = a.size();
        //     maxi = max (maxi, cnt);
        // }
        // return maxi;

        int res = 0;
        unordered_map<char, int> lastOccurence;
        int l = 0;

        for (int r = 0; r < s.length(); ++r) {
            char c = s[r];
            if (lastOccurence.count(c)) {
                l = max(l, lastOccurence[c] + 1);
            }
            lastOccurence[c] = r;
            res = max(res, r - l + 1);
        }

        return res;

    }
};