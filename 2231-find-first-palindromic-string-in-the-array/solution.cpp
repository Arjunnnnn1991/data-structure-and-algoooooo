class Solution {
public: 
bool palund(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            bool flag=false;
            flag=palund(words[i]);
            if(flag) return words[i];
        }
        return "";
    }
};
