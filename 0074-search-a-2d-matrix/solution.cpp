class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int col=mat[0].size()-1;
        int row=0;
        if(mat[mat.size()-1][col]<target) return false;
        else if(mat[0][0]>target) return false;
        else{
            while(mat[row][col]<target){
                row++;
            }
            int low=0,high=col,mid;
            while(high>=low){
                mid=low+(high-low)/2;
                if(mat[row][mid]==target) return true;
                else if(mat[row][mid]<target) low=mid+1;
                else high=mid-1;
            }
        }
        return false;

    }
};
