class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN||x==INT_MAX) return 0;
        bool flag=false;
        if(x<0) flag=true;
        x=abs(x);
        int num=0;
        while(x>0){
            if(num>INT_MAX/10||num<INT_MIN/10) return 0;
            num=num*10+x%10;
            x/=10;
        }
        if(flag) num=-num;
        return num;
    }
};
