class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>lo;
        unordered_set<char>hi;
        int ans=0;
        for(auto x:word){
            
            if(x<='z'&&x>='a'){
                char t=x-'a'+'A';
                if(lo.count(x)&&hi.count(t)) {ans--;
                lo.erase(x);
                }
                else if(hi.count(t)) continue;
                else lo.insert(x);    
            }
            else{
                char t=x-'A'+'a';
                if(hi.count(x)) continue;
                else if(lo.count(t)) {ans++;
                }
                 hi.insert(x);
            }
        }
        return ans;
    }
};
