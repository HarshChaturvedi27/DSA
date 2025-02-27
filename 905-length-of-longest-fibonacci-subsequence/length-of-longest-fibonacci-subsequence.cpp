class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        if(arr.size() < 3) return 0;
        int n = arr.size();
        unordered_set<int> mpp;
        for(int i = 0; i < n; i++){
            mpp.insert(arr[i]);
        }
        int maxi = 0;
        for(int i = 0; i < n-1; i++){
            for( int j = i + 1; j < n; j++){
                int temp1=arr[i];
                int temp2=arr[j];
                int cnt=2;
                while(mpp.find(temp1+temp2)!=mpp.end()){
                    cnt++;
                    int fib=temp1+temp2;
                    temp1 = temp2;
                    temp2 = fib;
                }
                maxi = max(maxi, cnt);
            } 
        }
        if (maxi > 2){ 
            return maxi;
        }
        return 0;

    }
};