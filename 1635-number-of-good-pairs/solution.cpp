class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto x:nums){
            if(m.count(x)){
                ans+=m[x];
                m[x]++;
            }
            else{
                m[x]=1;
            }
        }
        return ans;
    }
};
