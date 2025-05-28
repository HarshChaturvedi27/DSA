class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        // int count = 0;
        // for (int i=0; i<arr.size(); i++){
        //     for (int j=i+1; j<arr.size(); j++){
        //         for (int k=j+1; k<arr.size(); k++){
        //             if ((abs(arr[i] - arr[j]) <= a) && (abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[k]) <= c)){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;

        // int count = 0;
        // for (int i=0; i<arr.size()-2; i++){
        //     for (int j=i+1; j<arr.size()-1; j++){
        //         if (abs(arr[i] - arr[j]) <= a){
        //             for (int k=j+1; k<arr.size(); k++){
        //                 if ((abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[k]) <= c)){
        //                     count++;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return count;

        int count = 0;
        for (int i=0; i<arr.size()-2; i++){
            for (int k=i+2; k<arr.size(); k++){
                if (abs(arr[i] - arr[k]) > c) continue;
                else {
                    for (int j=i+1; j<k; j++){
                        if ((abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[j]) <= a)){
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};