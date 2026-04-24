class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int cur=0;
        int i=0,j=0;
        for(j;j<k;j++){
            char a=s[j];
            if(a=='a'||a=='u'||a=='i'||a=='o'||a=='e') cur++;
        }
        ans=cur;
        for(j=k;j<s.size();j++){
            char a=s[j];
            if(a=='a'||a=='u'||a=='i'||a=='o'||a=='e') cur++;
            char b=s[i];
             if(b=='a'||b=='u'||b=='i'||b=='o'||b=='e') cur--;
             i++;
             ans=max(cur,ans);
        }
        return ans;
    }
};
