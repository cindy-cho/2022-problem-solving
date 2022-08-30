class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.reserve(numRows*(numRows+1)/2);
        for(int i=0;i<numRows; i++){
            vector<int> tmpRow(i+1,0);
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i) tmpRow[j] = 1;
                else {
                    tmpRow[j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
                }
            }
            pascalTriangle.push_back(tmpRow);
        }
        return pascalTriangle;
    }
};