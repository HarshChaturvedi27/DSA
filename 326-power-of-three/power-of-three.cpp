class Solution {
public:
    bool isPowerOfThree(int n) {
        int num = 0;
        while(pow(3, num) <= n){
            if (pow(3, num) == n){
                return true;
            }
            num++;
        }
        return false;
    }
};