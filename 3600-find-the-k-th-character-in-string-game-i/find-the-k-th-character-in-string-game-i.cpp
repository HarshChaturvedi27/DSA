// CORRECT
// class Solution {
// public:
//     char kthCharacter(int k) {
//         string s = "a";
//         int r = 0;
//         while (s.length() < k){
//             int n = s.length();
//             r = 0;
//             while (r < n){
//                 if (s[r] != 'z'){
//                     char c = s[r] + 1;
//                     s += c;
//                 }
//                 else s += 'a';
//                 if (s.length() >= k) return s[k-1];
//                 r++;
//             }
//         }
//         return 'a';
//     }
// };

// CORRECT
// class Solution {
// public:
//     char kthCharacter(int k) {
//         string s = "a";
//         int r = 0;
//         while (s.length() < k){
//             int n = s.length();
//             r = 0;
//             while (r < n){
//                 if (s[r] != 'z'){
//                     char c = s[r] + 1;
//                     s += c;
//                 }
//                 else s += 'a';
//                 r++;
//             }
//         }
//         return s[k-1];
//     }
// };

class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.length() < k){
            int curWordLength=word.length();
            for (int i=0;i<curWordLength;++i)
            word += (word[i]-'a'+1) % 26 + 'a';
        }
        return word[k-1];
    }
};