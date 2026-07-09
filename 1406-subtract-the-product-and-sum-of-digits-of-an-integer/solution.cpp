class Solution {
public:
    int subtractProductAndSum(int n) {
        int take=0,have=1;
        while(n){
            take+=n%10;
            have*=n%10;
            n/=10;
        }
        return have-take;
    }
};
