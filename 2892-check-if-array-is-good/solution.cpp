class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
       int c=0;
        for(auto x:nums){
            if(x>n-1||x==0) return false;
            else if(x!=n-1&&s.count(x)) return false;
            else if(x==n-1){
               if(c>2) return false;
               else c++;
            }
            s.insert(x);
        }
        if(c!=2) return false;
        return true;
    }
};
