class Solution {
public:
bool checker(string a, string b){
     int m=b.size(),i=1,len=0;
        vector<int> lps(m,0);
        while(i<m){
            if(b[i]==b[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else {
                if(len!=0)len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        i=0;
        bool flag=false;
        int j=0;
        while(i<a.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            if(j==m){
                return true;
            }
            else if(i<a.size()&&a[i]!=b[j]){
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
    int repeatedStringMatch(string a, string b) {
        string k=a;
        int count=1;
        while(a.size()<b.size()){
            a+=k;
            count++;
        }
        if(checker(a,b)) return count;
        a+=k;
        if(checker(a,b)) return count+1;
        return -1;
       
    }
};
