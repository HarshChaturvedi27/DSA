// class Solution {
// public:
//     vector<int> lexicalOrder(int n) {
//         set<string> s;
//         for (int i = 1; i <= n; i++) {
//             s.insert(to_string(i));
//         }
//         vector<int> v;
//         for (const auto& it : s) {
//             v.push_back(stoi(it));
//         }
//         return v;
//     }
// };

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector <int> v;
        int curr = 1;
        for (int i = 1 ; i <= n; i++){
            v.push_back(curr);
            if (curr * 10 <= n){
                curr *= 10;
            }
            else {
                if (curr >= n){
                    curr /= 10;
                }
                curr++;
                while (curr % 10 == 0){
                    curr /= 10;
                }
            }
        }
        return v;
    }
};