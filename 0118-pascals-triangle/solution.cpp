class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr;
        for(int i=1;i<=n;i++){
            vector<int> t(i,0);
            arr.push_back(t);
        }
        for(int i=0;i<n;i++){
            arr[i][arr[i].size()-1]=1;
            arr[i][0]=1;
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
        return arr;

    }
};
