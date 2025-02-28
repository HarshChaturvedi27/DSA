class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // optimal - 2 pointer
        int i = 0;
        int j = numbers.size() - 1;
        while (i<j){
            if (numbers[i] + numbers[j] == target){
                return {i+1, j+1};
            } else if(numbers[i] + numbers[j] < target) i++;
            else j--;
        }
        return {-1, -1};

        // brute - TLE last case
        // for (int i=0; i<numbers.size(); i++){
        //     for (int j=i+1; j<numbers.size(); j++){
        //         if (numbers[i]+numbers[j] == target){
        //             return {i+1, j+1};
        //         }
        //     }
        // }
        // return {-1, -1};
    }
};