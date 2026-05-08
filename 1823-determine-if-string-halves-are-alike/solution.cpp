class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int>m;
        int mid=s.size()/2;
        for(int i=0;i<mid;i++){
            char c=s[i];
            if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            m['o']++;
            else m['e']++;
        }
        for(int i=mid;i<s.size();i++){
                        char c=s[i];
             if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            m['o']--;
            else m['e']--;
        }
        for(auto x:m){
            if(x.second!=0) return false;
        }
        return true;
    }
};
