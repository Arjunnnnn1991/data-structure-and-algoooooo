class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto x:nums){
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        int ans=mini;
        while(ans>0){
            if(mini%ans==0&&maxi%ans==0) return ans;
            else ans--;
        }
        return 1;
    }
};
