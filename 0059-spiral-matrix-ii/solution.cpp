class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> v;
        vector<vector<int>> matrix(n,vector<int>(n));
        for(int i=1;i<=n*n;i++){
            v.push_back(i);
        }
        int w=0,r1=0,c1=0,c2=n-1,r2=n-1;
        while( c1<=c2 && r1<=r2){
            for(int i=c1;i<=c2;i++){
                matrix[r1][i]=v[w];
                w++;
            } r1++;
            for(int i=r1;i<=r2;i++){
                matrix[i][c2]=v[w];
                w++;
            }c2--;
            if(c1>c2 || r1>r2){
                break;
            }
            for(int i=c2;i>=c1;i--){
                matrix[r2][i]=v[w];
                w++;
            }r2--;
            for(int i=r2;i>=r1;i--){
                matrix[i][c1]=v[w];
                w++;
            }c1++;
        }
      return matrix;  
    }
};
