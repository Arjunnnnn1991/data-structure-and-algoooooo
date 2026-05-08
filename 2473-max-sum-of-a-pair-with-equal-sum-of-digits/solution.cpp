class Solution {
public:
int doo(int a){
    int ans=0;
    while(a>0){
        ans+=a%10;
        a/=10;
    }
    return ans;
}
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>m;
        int ans=-1;
        for(auto x:nums){
            int l=doo(x);
           m[l].push(x);
           if(m[l].size()>2){
            m[l].pop();
           }
           if(m[l].size()==2){
            int t=m[l].top();
            m[l].pop();
            int v=m[l].top();
            ans=max(ans,v+t);
            m[l].push(t);
           }
        }
        return ans;
    }
};
