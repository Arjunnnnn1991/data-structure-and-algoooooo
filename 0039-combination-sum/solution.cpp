class Solution {
public:
    void rec(vector<vector<int>> &ans,vector<int>&arr,vector<int>&made,int &target,int i,int cur){
        if(cur==target){
            ans.push_back(made);
            return;
        }
        else if(cur>target||i>=arr.size()) return;
        else {
            rec(ans,arr,made,target,i+1,cur);
            made.push_back(arr[i]);
            cur+=arr[i];
            rec(ans,arr,made,target,i,cur);
            made.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int>made;
        // sort(arr.begin(),arr.end());
        rec(ans,arr,made,target,0,0);
        return ans;
    }
};
