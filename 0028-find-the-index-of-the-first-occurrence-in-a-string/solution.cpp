class Solution {
public:
    int strStr(string text, string pattern) {
        int m=pattern.size();
        vector<int> lps(m,0);
        int len=0,i=1;
        while(i<m){
            if(pattern[i]==pattern[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else {
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        int j=0;
        i=0;
        while(i<text.size()){
            if(pattern[j]==text[i]){
                i++;
                j++;
            }
            if(j==m) return i-j;
            else if(i<text.size()&&text[i]!=pattern[j]){
                if(j!=0)j=lps[j-1];
                else i++;
            }
        }
        return -1;
    }
};
