class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(auto x:s){
            if(x==letter)c++;
        }
        return (c*100)/s.size();
    }
};
