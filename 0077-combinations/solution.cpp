class Solution {
public:
void caller(int i,int n,vector<vector<int>>& ans,vector<int> &cur,int k){
    
    if(cur.size()==k) {
        ans.push_back(cur);
        return;
    }
    if(i>n) return;
    
    cur.push_back(i);
    caller(i+1,n,ans,cur,k);
    cur.pop_back();
    caller(i+1,n,ans,cur,k);
    return;
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> cur;
        caller(1,n,ans,cur,k);
        return ans;
    }
};
