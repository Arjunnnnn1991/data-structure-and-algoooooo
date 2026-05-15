class Solution {
public:
    string longestPrefix(string s) {
        int m=s.size();
        int len=0,i=1;
        vector<int> lps(m,0);
        while(i<m){
            if(s[len]==s[i]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
      
        return  s.substr(0,lps[m-1]);
    }
};
