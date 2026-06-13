class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& arr) {
       
        string ans="";
        for(auto x:words){
            int val=0;
            for(auto y:x){
                val+=arr[y-'a'];
            }
            ans+=(char)('z'-val%26);

        }
        return ans;
    }
};
