class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        if(m==n&&m==1){
            return {"."};
        }
        else{
           
            for(int i=0;i<m;i++){
                string k="";
                for(int j=0;j<n;j++){
                    if(i==0||j==n-1) k.push_back('.');
                    else k.push_back('#');
                }
                ans.push_back(k);
            }
        }
        return ans;
    }
};
