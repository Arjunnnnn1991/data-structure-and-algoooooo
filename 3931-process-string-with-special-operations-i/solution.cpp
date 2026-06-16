class Solution {
public:
    string processStr(string s) {
        vector<char> arr;
        for(auto x:s){
            if(x=='#'){
            int k=arr.size();
            for(int j=0;j<k;j++){
                arr.push_back(arr[j]);
                }
            }
            else if(x=='*'){
                if(arr.size()!=0) arr.pop_back();
            }
            else if(x=='%') reverse(arr.begin(),arr.end());
            else{
                arr.push_back(x);
            }
        }
        string ans="";
        for(auto x:arr){
            ans.push_back(x);
        }
        return ans;

    }
};
