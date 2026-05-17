class Solution {
public:
 bool check(string a,string b){
        int m=b.size();
        int i=1,len=0;
        vector<int> lps(m,0);
        while(i<m){
            if(b[i]==b[len]){
                len++;
                lps[i++]=len;
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
        i=0;
        int j=0;
        while(i<a.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            if(j==m&&i-j==0) return true;
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
    int prefixCount(vector<string>& s, string pref) {
       
      int count=0;
      
     for(auto word:s){
        if(check(word,pref))  count++;
       
      }
      return count;
    }
};
