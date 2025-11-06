class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            if(grid[i][0]!=1){
                for(int j=0;j<c;j++){
                    if(grid[i][j]==0){
                        grid[i][j]=1;
                    }
                    else{
                        grid[i][j]=0;
                    }
                }
            }
        }
        for(int i=1;i<c;i++){
            int zeros=0,ones=0;
            for(int j=0;j<r;j++){
                if(grid[j][i]==1) ones++;
                else{ zeros++;}
            }
            if(zeros>ones){
                for(int j=0;j<r;j++){
                    if(grid[j][i]==1) {
                        grid[j][i]=0;
                    }
                else{ grid[j][i]=1;}

                }
            }
        }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=c-1;j>=0;j--){
                ans+=grid[i][j]*pow(2,c-1-j);
            }
        }
        return ans;
    }
};
