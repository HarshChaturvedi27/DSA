class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort (answers.begin(), answers.end());
        int rabbits = 0;
        int cnt = 0;
        for (int i=0; i<answers.size(); i++){
            if (answers[i] == 0){
                rabbits++;
            } else{
                if (i<answers.size()-1){
                    if (answers[i] == answers[i+1] && cnt<answers[i]){
                        cnt++;
                        continue;
                    }
                    cnt = 0;
                }
                rabbits += answers[i] + 1;
            }   
        }
        return rabbits;
    }
};