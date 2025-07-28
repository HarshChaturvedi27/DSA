class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0; //edge case
        if (n <= 2) return 1; //fib(2) = 1 so return 1 as soon as it hits 2 or lower
        return fib(n-1) + fib(n-2);
    }
};

// BETTER ANS BY VARUN
// class Solution {
// public:
//     int fib(int n) {
//         if (n <= 1) return n;
//         return fib(n-1) + fib(n-2);
//     }
// };