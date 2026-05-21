class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>s;
        for(auto x:arr1){
            string k=to_string(x);
            for(int i=0;i<=k.size();i++){
                s.insert(k.substr(0,i));
            }
        }
        int ans=0;
        for(auto x:arr2){
            string k=to_string(x);
            for(int i=1;i<=k.size();i++){
                if(s.count(k.substr(0,i))) ans=max(ans,i);
            }
        }
        return ans;
    }
};
