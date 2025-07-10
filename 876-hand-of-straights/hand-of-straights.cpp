class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;

        map<int, int> mpp;
        for (int card : hand) {
            mpp[card]++;
        }

        while (!mpp.empty()) {
            int start = mpp.begin()->first;

            // Try to form a group starting from smallest key
            for (int i = 0; i < groupSize; i++) {
                int current = start + i;
                if (mpp[current] == 0) return false;
                mpp[current]--;
                if (mpp[current] == 0) mpp.erase(current);
            }
        }

        return true;
    }
};