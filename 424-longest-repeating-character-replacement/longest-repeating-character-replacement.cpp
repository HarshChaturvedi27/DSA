class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxCharCount = 0; // max occurence of any single char
        int maxWin = 0;       // max valid window size
        unordered_map <char, int> mpp;

        for (int r = 0; r < s. size(); r++){
            mpp[s[r]]++;
            maxCharCount = max (maxCharCount, mpp[s[r]]);

            if ( (r -l +1 - maxCharCount) > k ){
                mpp[s[l]]--;
                l++;
            }
            maxWin = max (maxWin, r -l +1);
        }
        return  maxWin;
    }
};