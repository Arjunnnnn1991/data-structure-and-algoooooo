class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0;
        for(int i=0;i<words.size();i++){
            int j=0;
            string w=words[i];
            bool flag=true;
            for(int k=0;k<w.size();k++){
                if(w[k]!=s[j++]) {
                    flag=false;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};
