class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        vector<int> indices;
        
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels.push_back(c);
                indices.push_back(i);
            }
        }
        sort(vowels.begin(), vowels.end());
        for (int i = 0; i < indices.size(); i++) {
            s[indices[i]] = vowels[i];
        }
        
        return s;
    }
};