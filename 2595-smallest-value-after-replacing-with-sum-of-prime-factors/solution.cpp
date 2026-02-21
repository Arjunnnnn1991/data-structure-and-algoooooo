class Solution {
public:
bool isprime(int a){
    if(a <= 1) return false;
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}


    int smallestValue(int a) {
        if(a==4) return 4;
        if(isprime(a)) return a;
    int sum=0;
    for(int i=1;i*i<(a);i++){
        if(a%i==0&&isprime(i)) {
            int m=a;
            while(m%i==0){
                sum+=i;
                m/=i;
            }
        }
    }
    for(int i=sqrt(a);i>=1;i--){
        if(a%i==0&&isprime(a/i)) {
            int m=a;
            while(m%(a/i)==0){
                sum+=(a/i);
                m/=(a/i);
            }
        }
    }
    if(sum==a) return a; 
        return smallestValue(sum);
    }
};
