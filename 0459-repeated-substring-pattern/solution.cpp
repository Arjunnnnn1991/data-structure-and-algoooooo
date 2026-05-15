class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=0,i=1,m=s.size();
        vector<int> lps(m,0);
        while(i<m){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else {
                if(len!=0){
                    len=lps[len-1];
                }
                else {
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps[m-1]>0&& m%(m-lps[m-1])==0;
    }
};
