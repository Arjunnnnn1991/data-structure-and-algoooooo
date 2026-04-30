class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        long long i=0,j=0;
        while(j<s.size()){
             if(s[i]=='0'){i++;
             j++;}
             else if(s[j]=='1')j++;
             else{
                swap(s[j],s[i]);
                ans+=j-i;
                i++;;
                j++;
             }
        }
        return ans;
    }
};
