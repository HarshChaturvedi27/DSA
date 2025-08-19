class Solution {
public:
    string largestGoodInteger(string num) {
        string s = "";
        for (int i = 0; i < num.length() - 2; i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string temp = string(3, num[i]);  // create a string of 3 same chars
                s = max(s, temp);
            }
        }
        return s;
    }
};
