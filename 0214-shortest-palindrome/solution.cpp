class Solution {
public:
    string shortestPalindrome(string s) {
        string w=s;
        reverse(w.begin(),w.end());
        string combo=s+'#'+w;
        int i=1,len=0,m=combo.size();
        vector<int>lps(m,0);
        while(i<m){
            if(combo[i]==combo[len]){
                lps[i++]=++len;
            }
            else{
                if(len!=0)len=lps[len-1];
                else {
                    lps[i]=0;
                    i++;
                }
            }
        }
        string r=s.substr(lps[m-1]);
        reverse(r.begin(),r.end());
        return r+s;

    }
};
