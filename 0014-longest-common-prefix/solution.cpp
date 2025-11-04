class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first =strs[0];
        string last =strs[n-1];
        string s="";
        if (n==1){
            return strs[0];
        }
        else{
            for(int i=0;i<min(first.size(),last.size());i++){
if(first[i]==last[i]){
    s=s+first[i];
}
else{ return s;}
            }
        }
   return s; }
};
