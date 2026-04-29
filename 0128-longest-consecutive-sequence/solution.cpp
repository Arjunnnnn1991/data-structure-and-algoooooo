class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        unordered_set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        int ans=1;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int cur=1;
                while(s.find(x+cur)!=s.end()) cur++;
                ans=max(ans,cur);
            }
        }
       return ans;
    }
};
