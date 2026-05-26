class Solution {
public:
    int numberOfSpecialChars(string word) {
       unordered_set<char> s;
        int ans=0;
        for(auto x:word){
            if(x>='a'&&x<='z'){
               if(s.count(x)) continue;
               else{
                s.insert(x);
                if(s.count(x-'a'+'A')) ans++;
               }
            }
            else{
                if(s.count(x)) continue;
                else{
                s.insert(x);
                if(s.count(x-'A'+'a')) ans++;
               }
            }
        }
        return ans;
    }
};
