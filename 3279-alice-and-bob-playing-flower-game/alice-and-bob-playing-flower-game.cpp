class Solution {
public:
    long long flowerGame(int n, int m) {
        //sum should be odd as fisrt as well as last flower should
        // be picked by alice to win
        // long long count;
        // for (int i = 1; i <= n; i++){
        //     for (int j = 1; j <= m; j++){
        //         if ((i + j) % 2 == 0) continue;
        //         else {
        //             count++;
        //         }
        //     }
        // }

        // There are n * m total possible pairs.
        // Exactly half of them will have different parity (one odd, one even).
        // Therefore the answer is n * m / 2.
        return 1LL * n * m / 2;
    }
};