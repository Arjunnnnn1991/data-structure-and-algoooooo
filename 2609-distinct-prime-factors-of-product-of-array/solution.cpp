class Solution {
public:
bool isprime(int a){
    if(a<=1) return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;

    }
    return true;
}
    int distinctPrimeFactors(vector<int>& arr) {
        
        int maax=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
           maax=max(maax,arr[i]);
        }
        vector<bool> ans(maax+1,0);
        for(int i=0;i<arr.size();i++){
            int k=arr[i];
            if(isprime(k) )ans[k]=1;
            else{
                for(int j=2;j<=k/2;j++){
                    if(k%j==0&&isprime(j)) ans[j]=1;
                    while(k%j==0){
                        k/=j;
                    }
                    if(isprime(k)){ans[k]=1;
                    break;}
                    else if(k==1) {ans[j]=1;
                    break;}
                }
            }
        }
        int count=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]) count++;
        }
        return count;
    }
};
