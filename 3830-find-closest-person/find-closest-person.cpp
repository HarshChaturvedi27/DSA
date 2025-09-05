// class Solution {
// public:
//     int findClosest(int x, int y, int z) {
//         if (abs(x-z) < abs(y-z)) return 1;
//         else if (abs(x-z) > abs(y-z)) return 2;
//         return 0;
//     }
// };

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (abs(x-z) == abs(y-z)) return 0;
        return (abs(x-z) < abs(y-z)) ? 1 : 2;
    }
};