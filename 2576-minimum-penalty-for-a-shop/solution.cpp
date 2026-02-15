class Solution {
public:
    int bestClosingTime(string str) {
        int ans=0, cans=0;
    int closeidx=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='Y') {
            ans++;
            cans++;
            }
     }
     for(int i=0;i<str.length();i++){
        if(str[i]=='Y'){
            cans--;
        }
        else cans++;
        if(ans>cans){
            ans=cans;
            closeidx=i+1;
        }
     }
     return closeidx;
    }
};
