class Solution {
public:
    bool isIsomorphic(string s, string t) {
    unordered_map<char,char> m;
    unordered_set<char>se;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            if(se.find(t[i])!=se.end()) return false;
            m[s[i]]=t[i];
            se.insert(t[i]);
        }
        else{
            if(m[s[i]]==t[i]) continue;
            else return false;
        }
    }
        return true;
    }
};
