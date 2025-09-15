class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n = text.length() - 1;
        int cnt = 0;
        unordered_set<char> s;
        text += ' ';
        for (auto it1 : text){
            if (it1 != ' ') s.insert(it1);
            else {
                cnt++;
                for (auto it2 : brokenLetters){
                    if (s.find(it2) != s.end()){
                        cnt--;
                        break;
                    }
                }
                s.clear();
            }
        }
        return cnt;
    }
};