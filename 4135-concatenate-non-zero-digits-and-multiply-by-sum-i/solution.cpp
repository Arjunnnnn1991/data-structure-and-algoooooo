class Solution {
public:
    long long sumAndMultiply(int n) {
        long long hold=0;
        long long ans=0;
        string s=to_string(n);
        for(auto x:s){
            if(x!='0'){ ans*=10;
                ans+=(int)(x-'0');
                hold+=(int)(x-'0');} ;
          
        }
        return hold*ans;
    }
};
