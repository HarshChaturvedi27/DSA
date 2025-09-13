class Solution {
public:
    string sortVowels(string s) {
        multiset<char> s1;
        set<int> st;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                s1.insert(s[i]);
                st.insert(i);
            }
        }
        while(st.size()){
            s[*st.begin()] = *s1.begin();
            st.erase(st.begin());
            s1.erase(s1.begin());
        }
        return s;
    }
};