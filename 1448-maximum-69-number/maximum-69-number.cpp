class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (auto& it : s){
            if(it != '9'){
                it = '9';
                break;
            }
        }
        num = stoi(s);
        return num;
    }
};