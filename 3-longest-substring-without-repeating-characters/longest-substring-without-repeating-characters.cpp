class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0, cnt = 0;
        unordered_map <char, int> mpp;
        string a;
        for (auto it : s){
            mpp[it]++;
            if (mpp[it] == 2){
                int idx = a.find(it);
                for (int i = 0; i <= idx; i++){
                    mpp[a[i]]--;
                }
                a.erase(0, idx +1);
            }
            a += it;
            cnt = a.size();
            maxi = max (maxi, cnt);
        }
        return maxi;
    }
};