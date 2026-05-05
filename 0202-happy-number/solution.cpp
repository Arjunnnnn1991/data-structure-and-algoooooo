class Solution {
public:
int make(int x){
    int ans=0;
    while(x>0){// slowwwwww fast 2 pointerrrr
        ans+=pow(x%10,2);
        x/=10;
    }
    return ans;
}
    bool isHappy(int n) {
        int slow=n,fast=n;
        while (true){
            slow=make(slow);
            fast=make(fast);
            fast=make(fast);
            if(slow==1) return true;
            if(fast==slow) return false;
        }
        return true;
    }
};
