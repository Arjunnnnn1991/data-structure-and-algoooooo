class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int col=mat[0].size()-1;
       int row=0;
       while(col>=0&&row<=mat.size()-1){
        if(mat[row][col]<target) row++;
        else if(mat[row][col]==target) return true;
        else col--;
       }
       return false;
    }
};
