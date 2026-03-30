class Solution {
public:
void rec(vector<char>& s,int i){
if(i==s.size()) return ;
else{
    swap(s[i],s[s.size()-i-1]);
    rec(s,i+1);
    return;
}
}
    void reverseString(vector<char>& s) {
     rec(s,s.size()/2)   ;
     return;
    }

};
