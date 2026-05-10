class Solution {
public:
    string removeTrailingZeros(string s) {
        while(s.size()>1&&s[s.size()-1]=='0') s.pop_back();
        return s;
    }
};
