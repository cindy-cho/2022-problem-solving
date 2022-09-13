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

// second try
// Runtime: 15 ms, faster than 25.72% / Memory Usage: 10.5 MB, less than 67.18%

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() == 0) return 0;
        
        sort(tokens.begin(), tokens.end());
        
        int start=0, end = tokens.size()-1, score = 0, maxScore = 0;
        while(start<=end){
            if(power >= tokens[start]){
                power -= tokens[start++];
                score++;
                maxScore = max(maxScore, score);
            } else if(score >= 1){
                score --;
                power += tokens[end--];
            } else {
                break;
            }
        }
        
        return maxScore;
    } 
};
