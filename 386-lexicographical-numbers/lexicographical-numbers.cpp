// class Solution {
// public:
//     vector<int> lexicalOrder(int n) {
//         string temp = to_string(n);
//         int a = temp[0];
//         set <string> s;
//         for (int i = 1; i <= n; i++){
//             s.insert(to_string(i));
//         }
//         vector <int> v;
//         while (a>=0){
//             a--;
//             for (auto it : s){
//                 if ((it)[0] == 1){
//                     v.push_back(stoi(it));
//                     s.erase(it);
//                 }
//             }
//         }
//         return v;
//     }
// };

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        set<string> s;
        for (int i = 1; i <= n; i++) {
            s.insert(to_string(i));
        }
        vector<int> v;
        for (auto it : s) {
            v.push_back(stoi(it));
        }
        return v;
    }
};