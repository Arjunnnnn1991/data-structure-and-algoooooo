class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> help(26,0);
        for(int i=0;i<s.size();i++){
            int x=s[i]-'a';
            help[x]++;
        }
        for(int i=0;i<s.size();i++){
            int x=s[i]-'a';
            if(help[x]==1) return i;
        }
        return -1;
    }
};
