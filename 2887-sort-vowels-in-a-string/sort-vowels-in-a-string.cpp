class Solution {
public:
    string sortVowels(string s) {
        multiset<char> vowels;
        vector<int> indices;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels.insert(c);
                indices.push_back(i);
            }
        }
        
        auto it = vowels.begin();
        for (int idx : indices) {
            s[idx] = *it;
            it++;
        }
        
        return s;
    }
};