class Solution {
public:
    // TC = O(log₄ n) SC = O(1)
    bool isPowerOfFour(int n) {
        long long num = 0;
        while(pow(4, num) <= n){
            if(pow(4, num) == n) return true;
            num++;
        }
        return false;
    }

    //Iterative division
    // Time: O(log₄ n) Space: O(1)
    // bool isPowerOfFour(int n) {
    //     if (n <= 0) return false;
    //     while (n % 4 == 0) n /= 4;
    //     return n == 1;
    // }

    //Recursive division
    // Time: O(log₄ n) Space: O(log₄ n) (recursion stack)
    // bool isPowerOfFour(int n) {
    //     if (n == 1) return true;
    //     if (n <= 0 || n % 4 != 0) return false;
    //     return isPowerOfFour(n / 4);
    // }
};