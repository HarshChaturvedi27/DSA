class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        // INCORRECT
        // priority_queue<int> maxh;
        // int l = 0, r = 0, i = 0, sum = 0;
        // while(i < startTime.size()){
        //     r = startTime[i];
        //     maxh.push(r - l);
        //     l = endTime[i];
        //     i++;
        // }
        // if (l < eventTime) maxh.push(eventTime - l);
        // for (int i = 0; i <= k; i++){
        //     sum += maxh.top();
        //     maxh.pop();
        // }
        // return sum;

        int n = startTime.size();
        vector<int> gaps(n+1);

        //calc all gaps
        for (int i = 1; i < n; i++){
            gaps[i] = startTime[i] - endTime[i-1];
        }
        gaps[0] = startTime[0]; // before first event
        gaps[n] = eventTime - endTime[n-1]; // after last event

        // we neend to check for max of sum of all contiguous gaps of size k + 1
        // Sliding window of size k + 1
        // Initial window sum
        int sum = 0, maxi = INT_MIN;
        for (int i = 0; i < k+1; i++){
            sum += gaps[i];
        }
        maxi = max(sum, maxi);

        // Slide the window
        int i = 0, j = k + 1;
        while(j < n+1){
            sum -= gaps[i++];
            sum += gaps[j++];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};