class Solution {
public:
    void rec(vector<vector<int>>&ans,vector<int> holder,vector<int> &nums,int n,int idx){
        if(idx==n){
            ans.push_back(holder);
            return;
        }
        rec(ans,holder,nums,n,idx+1);
        holder.push_back(nums[idx]);
        rec(ans,holder,nums,n,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> holder;
        int n=nums.size();
        rec(ans,holder,nums,n,0);
        return ans;
    }
};
