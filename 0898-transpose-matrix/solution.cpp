class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
       vector<vector<int>> ans(mat[0].size(),vector<int> (mat.size())) ;
       for(int i=0;i<mat[0].size();i++){
        for(int j=0;j<mat.size();j++){
            ans[i][j]=mat[j][i];
        }
       }
       return ans;
    }
};
