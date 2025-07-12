class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        unordered_map <int, int> temp;
        vector<int> v = arr;
        sort(v.begin(), v.end());
        // unordered_map <pair<int, <pair<int, int>> mpp;
        // for (auto it : arr){
        //     mpp[it]++;
        // }
        // priority_queue<int, vector<int>, greater<int>> minh;
        // for (auto it : arr){
        //     minh.push(it);
        // }
        // // while(!mpp.empty()){

        // // }
        // int i = 0, j = 0;
        // while (i < arr.size()){
            
        // }
        int j = 1;
        for (int i = 0; i < arr.size(); i++){
            if (i-1 < 0){
                temp[v[i]] = j;
            } else if (v[i-1] != v[i]){
                j++;
                temp[v[i]] = j;
            } else {
                temp.insert({v[i], j});
            }
        }
        for (int i = 0; i < arr.size(); i++){
            ans.push_back(temp[arr[i]]);
        }
        return ans;
    }
};