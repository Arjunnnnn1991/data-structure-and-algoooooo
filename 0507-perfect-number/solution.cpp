class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=0;
        for(int i=1;i<sqrt(num);i++){
            if(num%i==0) {ans+=i;}
        }
        for(int i=sqrt(num);i>1;i--){
            if(num%i==0) ans+=num/i; 
        }
        if(ans==num) return true;
        else return false;
    }
};
