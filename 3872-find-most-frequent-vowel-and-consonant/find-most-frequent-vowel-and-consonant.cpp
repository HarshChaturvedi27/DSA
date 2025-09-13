class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowels;
        unordered_map<char, int> cons;
        int max_vowels = 0;
        int max_cons = 0;
        for (auto it : s){
            if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u'){
                vowels[it]++;
                max_vowels = max(max_vowels, vowels[it]);
            } else {
                cons[it]++;
                max_cons = max(max_cons, cons[it]);
            }
        }
        return max_vowels + max_cons;
    }
};