class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() == 0) return 0;
        
        sort(tokens.begin(), tokens.end());
        
        if(tokens[0] > power) return 0;
        
        int start=0, end = tokens.size()-1, score = 0, maxScore = 0;
        do{
            if(tokens[start] > power) return maxScore;
            
            while(start <= end && tokens[start] <= power){
                power -= tokens[start];
                start ++;
                score ++;
            }
            maxScore = max(maxScore, score);
            
            if(end > start && score >= 1){
                power += tokens[end];
                end --;
                score --;
            }
        }while(start<end);
        
        return maxScore;
    } 
};