class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxi=0;
        vector<vector<int>> m(10,vector<int>());
        for(auto x:nums){
            int l=9,h=0;
    int w=x;
            while(x){
                l=min(l,x%10);
                h=max(h,x%10);
                x=x/10;
            }
            maxi=max(maxi,h-l);
            m[h-l].push_back(w);
            
        }
        int ans=0;
        for(auto x:m[maxi]){
            ans+=x;
        }
        return ans;
    }
};
