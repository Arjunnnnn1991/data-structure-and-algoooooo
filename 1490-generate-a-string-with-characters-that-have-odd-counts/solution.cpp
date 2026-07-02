class Solution {
public:
    string generateTheString(int n) {
        if(n%2==0){
            string ans="a";
            for(int i=0;i<n-1;i++){
                ans.push_back('v');
            }
            return ans;
        }
        else{
            string ans="";
            for(int i=0;i<n;i++){
                ans.push_back('v');
            }
              return ans;
        }
    }
};
