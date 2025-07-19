class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        int r = 0;
        while (r < s.length()){
            int n = s.length();
            r = 0;
            while (r < n){
                if (s[r] != 'z'){
                    char c = s[r] + 1;
                    s += c;
                }
                else s += 'a';
                if (s.length() >= k) return s[k-1];
                r++;
            }
        }
        return 'a';
    }
};