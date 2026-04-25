#include <string>
class Solution {
public:
    bool validDigit(int n, int x) {
       bool found =false;
        while(n>=10){
            if(n%10==x) found=true;
            n/=10;
        }
        if (n==x) return false;
        else return found;
    }
};
