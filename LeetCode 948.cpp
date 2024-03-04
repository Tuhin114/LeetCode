// LeetCode 948. Bag of Tokens
// DCC - 04-03-24

// Greedy Approach
// For explanation see the video https://www.youtube.com/watch?v=LCx1WzlYgvw

/**
 class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int maxScore = 0;
        int score = 0;

        //Sort the tokens
        sort(tokens.begin(), tokens.end());

        int i = 0;
        int j = n - 1;

        while(i <= j){
            if(power >= tokens[i]){
                power -= tokens[i];  //Decrease the power
                score += 1;
                i++;

                maxScore = max(maxScore, score);
            }else if(score >= 1){
                power += tokens[j];
                score -= 1;
                j--;
            }else{
                return maxScore;
            }
        }
        return maxScore;
    }
};
*/