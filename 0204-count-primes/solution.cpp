class Solution {
public:
bool isprime(int a){
    if(a <= 1) return false;
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}
void filler(vector<bool>&sieve){
    int n=sieve.size()-1;
    for(int i=2;i*i<=n;i++){
        for(int j=i*2;j<=n;j+=i){
            sieve[j]=0;
        }
    }
    return;
}
    int countPrimes(int n) {
       
        if(n<=2) return 0;
        
        int count=0;
        vector<bool> sieve(n+1,1);
        filler(sieve);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2;i<n;i++){
            if(sieve[i]==1) count++;
        }
        return count;
    }
};
