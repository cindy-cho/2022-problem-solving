class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = -1, crntProfit = -1;
        int crntMin = prices[0];
        int crntMax = prices[0]-1;
        for(auto price: prices){
            if(price >= crntMax) crntMax = price;
            else if(price < crntMin){
                crntProfit = crntMax - crntMin;
                maxProfit = max(maxProfit , crntProfit);
                crntMin = price;
                crntMax = price;
            }
        }
        crntProfit = crntMax - crntMin;
        maxProfit = max(maxProfit , crntProfit);
        return maxProfit;
    }
};