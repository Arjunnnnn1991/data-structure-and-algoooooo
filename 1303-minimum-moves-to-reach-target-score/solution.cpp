class Solution {
public:
    int minMoves(int target, int ma) {
        int ans=0;
        if(ma==0) return target-1;
        while(target>1){
            if(ma&&target%2==0&&target/2!=0){
                target/=2;
                ma--;
            }
            else if(ma==0){
                ans+=target-1;
                return ans;
            }
            else{
                target--;
            }
            ans++;
        }
        return ans;
    }
};
