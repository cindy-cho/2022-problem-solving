class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int h = mat.size(), w = mat[0].size();
        if(r*c != h*w) {
            return mat;
        }
        
        vector<vector<int>> newMatrix ( r, vector<int> (c));
        
        for(int i=0;i<r*c;i++){
            newMatrix[i/c][i%c] = mat[i/w][i%w];
        }
        return newMatrix;
    }
};