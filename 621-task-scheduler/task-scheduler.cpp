class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mpp;
        priority_queue<pair<int, char>> maxh;
        int cnt = 0;
        for (auto& it : tasks){
            mpp[it]++;
        }
        for (auto it : mpp){
            maxh.push({it.second, it.first});
        }
        while(!mpp.empty()){
            vector<pair<int, char>> temp;
            for (int i = 0; i < n+1; i++){
                if (maxh.size()){
                    auto [freq, ch] = maxh.top();
                    freq--;
                    if (freq > 0){
                        temp.push_back({freq, ch});
                    }else{
                        mpp.erase(ch);
                    }
                    maxh.pop();
                    cnt++;
                }
                else if (!mpp.empty()) cnt++;
            }
            for (auto it : temp){
                maxh.push({it.first, it.second});
            }
        }
        return cnt;
    }
};