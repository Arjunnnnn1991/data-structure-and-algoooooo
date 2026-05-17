class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string k="";
        int j=0;
        while(k.size()<s.size()&&j<words.size()){
            k.append(words[j++]);
        }
        return k==s;
    }
};
