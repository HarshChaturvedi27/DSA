class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue <pair<int, int>> maxh;
        for (auto it : arr){
            maxh.push({abs(it-x), it});
            if (maxh.size() > k){
                maxh.pop();
            }
        }
        while (!maxh.empty()){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        sort (v.begin(), v.end());
        return v;
    }
};