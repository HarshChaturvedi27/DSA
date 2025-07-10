class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map <int, int> mpp;
        vector<pair<int, int>> v;
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<int>> minh;

        if (hand.size() % groupSize != 0) return false;

        for (int i = 0; i < hand.size(); i++){
            mpp[hand[i]]++;
        }
        for (auto it : mpp){
            v.push_back(it);
        }
        while(!v.empty()){
            vector<pair<int, int>> temp;
            if (v.size() < groupSize) return false;

            for (int i = 1; i < groupSize; i++){
                if (v[i].first != (v[(i-1)].first + 1)) return false;
            }

            // Decrement counts and store remaining
            for (int i = 0; i < groupSize; i++) {
                v[i].second--;
                if (v[i].second > 0) {
                    temp.push_back(v[i]);
                }
            }

            // remove the used elements
            v.erase(v.begin(), v.begin() + groupSize);
            // Insert remaining counts back at the beginning
            v.insert(v.begin(), temp.begin(), temp.end());
            // Re-sort to maintain order (since we inserted at beginning)
            // sort(v.begin(), v.end());
        }
        return true;
    }
};