// brute n2 using set
// class Solution {
// public:
//     int countVowelSubstrings(string word) {
//         int n = word.length();
//         int count = 0;
//         unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

//         for (int i = 0; i < n; i++) {
//             unordered_map<char, int> freq;
//             for (int j = i; j < n; j++) {
//                 if (vowels.count(word[j]) == 0) break;  // Stop on consonant
                
//                 freq[word[j]]++;

//                 if (freq.size() == 5) count++;  // Found all 5 distinct vowels
//             }
//         }

//         return count;
//     }
// };

// INCORRECT
// class Solution {
// public:
//     int VowelSubstrings(string& word, int k) {
//         int l = 0, r = 0, cnt = 0;
//         unordered_map<char,int> mpp1;
//         unordered_map<char,int> mpp2;
//         while (r < word.length()){
//             if (word[r] == 'a' || word[r] == 'e' || word[r] == 'i' || word[r] == 'o' || word[r] == 'u'){
//                 mpp1[word[r]]++;
//             }
//             mpp2[word[r]]++;
//             while (mpp1.size() != mpp2.size() && l <= r){
//                 if (mpp1.count(word[l])) {
//                     mpp1[word[l]]--;
//                     if (mpp1[word[l]] == 0) mpp1.erase(word[l]);
//                 }
//                 mpp2[word[l]]--;
//                 if (mpp2[word[l]] == 0) mpp2.erase(word[l]);
//                 l++;
//                 //if (mpp1.size() <= k) cnt++;
//             }
//             if (mpp1.size() <= k) {
//                 cnt += r -l + 1;
//             }
//             r++;
//         }
//         return cnt;
//     }
//     int countVowelSubstrings(string word) {
//         int ans = VowelSubstrings(word, 5) - VowelSubstrings(word, 4);
//         return ans;
//     }
// };

class Solution {
public:
    int VowelSubstrings(string& word, int k) {
        int l = 0, r = 0, cnt = 0;
        unordered_map<char,int> mpp1;
        //unordered_map<char,int> mpp2;
        while (r < word.length()){
            if (word[r] == 'a' || word[r] == 'e' || word[r] == 'i' || word[r] == 'o' || word[r] == 'u'){
                mpp1[word[r]]++;
            } else{
                mpp1.clear();
                l = r +1;
                r++;
                continue;
            }
            while (mpp1.size() > k){
                mpp1[word[l]]--;
                if (mpp1[word[l]] == 0) mpp1.erase(word[l]);
                l++;
            }
            cnt += r -l +1;
            r++;
        }
        return cnt;
    }
    int countVowelSubstrings(string word) {
        int ans = VowelSubstrings(word, 5) - VowelSubstrings(word, 4);
        return ans;
    }
};

// correct dekha hua
// class Solution {
// public:
//     int VowelSubstrings(string& word, int k) {
//         int l = 0, r = 0, cnt = 0;
//         unordered_map<char,int> mpp;
//         while (r < word.length()){
//             if (word[r] == 'a' || word[r] == 'e' || word[r] == 'i' || word[r] == 'o' || word[r] == 'u'){
//                 mpp[word[r]]++;
//             } else{
//                 mpp.clear();
//                 l = r +1;
//                 r++;
//                 continue;
//             }
//             while (mpp.size() > k){
//                 mpp[word[l]]--;
//                 if (mpp[word[l]] == 0) mpp.erase(word[l]);
//                 l++;
//             }
//             cnt += r -l + 1;
//             r++;
//         }
//         return cnt;
//     }
//     int countVowelSubstrings(string word) {
//         int ans = VowelSubstrings(word, 5) - VowelSubstrings(word, 4);
//         return ans;
//     }
// };