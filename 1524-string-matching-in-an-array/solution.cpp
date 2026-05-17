class Solution {
public:
     bool check(string a,string b){
        if(a.size()<b.size()) return check(b,a);
        int m=b.size();
        vector<int> lps(m,0);
        int i=1,len=0;
        while(i<m){
            if(b[i]==b[len]){
                len++;
                lps[i++]=len;
            }
            else{
                if(len!=0) len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        i=0;
        int j=0;
        while(i<a.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            if(j==m) return true;
            else if(a[i]!=b[j]){
                if(j!=0){
                    j=lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
        return false;
     }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        unordered_set<string>s;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(check(words[i],words[j])) {
                    if(words[i].size()<words[j].size())s.insert(words[i]);
                    else s.insert(words[j]);
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
