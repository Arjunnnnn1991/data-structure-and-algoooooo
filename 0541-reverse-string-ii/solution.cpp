class Solution {
public:
    string reverseStr(string s, int k) {
        // for(int i=0;i<s.size();i+=2*k){
        //     if(i+k>s.size()){
        //         reverse(s.begin()+i,s.end());
        //     }
        //     else if(s.size()-1-i<2*k &&s.size()-1-i>=k){
        //         reverse(s.begin()+i,s.begin()+i+k);
        //     }
        //     else{
        //     for(int j=i;j<(i)+(k)/2;j++){
        //         swap(s[j],s[i+k-j-1]);
        //     }
        //     }
        // }
        // return s;
        // for(int i=0;i<s.size();i+=2*k){
        //      reverse(s.begin()+i,s.begin()+min(i+k,(int)s.size()));
        // }
        // return s;
        int slow=0;
        int fast=2*k;
        while(slow<s.size()){
            if(slow+k>s.size()){
                reverse(s.begin()+slow,s.end());
            }
            else{
                reverse(s.begin()+slow,s.begin()+slow+k);
               
            }
            slow+=2*k;
        }
        return s;
    }
};
