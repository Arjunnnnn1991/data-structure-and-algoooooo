class Solution {
public:
void rec(vector<vector<int>> &ans,vector<int> holder,vector<int>nums,int idx,int z){
        if(idx==z){
            ans.push_back(holder);
            return;
        }
        if(holder.size()==0){
        rec(ans,holder,nums,idx+1,z);
        holder.push_back(nums[idx]);
        rec(ans,holder,nums,idx+1,z);
        return;
        }
        if(holder[holder.size()-1]==nums[idx]){
            holder.push_back(nums[idx]);
            rec(ans,holder,nums,idx+1,z);
            return;
        }
        rec(ans,holder,nums,idx+1,z);
        holder.push_back(nums[idx]);
        rec(ans,holder,nums,idx+1,z);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> holder;
        int z=nums.size();
        rec(ans,holder,nums,0,z);
        return ans;
    }
};
