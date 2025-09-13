class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> char_cnt;
        int max_vowels = 0;
        int max_cons = 0;
        for (auto it : s){
            if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u'){
                char_cnt[it]++;
                max_vowels = max(max_vowels, char_cnt[it]);
            } else {
                char_cnt[it]++;
                max_cons = max(max_cons, char_cnt[it]);
            }
        }
        return max_vowels + max_cons;
    }
};