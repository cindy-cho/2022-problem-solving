bool cmp(vector<int>& a, vector<int>& b) {
    if(a[0] == b[0]){
        return a[1] > b[1];
    }
    return a[0] < b[0];
}

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int ans = 0, total = properties.size();
        int maxDefense = INT_MIN;
    
        if(total == 1) return 0;
        
        sort(properties.begin(), properties.end(), cmp);
        
        for(int i = total-1; i>=0;i--){
            if(properties[i][1] < maxDefense) ans++;
            maxDefense = max(maxDefense, properties[i][1]);
        }
        
        return ans;
    }
};