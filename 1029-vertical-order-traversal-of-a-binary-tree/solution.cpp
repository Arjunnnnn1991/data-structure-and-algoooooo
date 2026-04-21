/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool comp(vector<int> a, vector<int> b) {
    if (a[0] != b[0]) return a[0] < b[0]; 
    if (a[1] != b[1]) return a[1] < b[1];
    return a[2] < b[2];                    
}
class Solution {
public: 

    void push(TreeNode*root,int r,int c,vector<vector<int>>&tem){
        if(root==NULL) return;
        vector<int> arr={c,r,root->val};
        tem.push_back(arr);
        push(root->left,r+1,c-1,tem);
        push(root->right,r+1,c+1,tem);
        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        vector<vector<int>> arr;
        push(root,0,0,arr);
        sort(arr.begin(),arr.end(),comp); 
        // sort(arr.begin(),arr.end(),go);
       
         
        // sort(arr.begin(),arr.end(),fmo);
       
        int pre=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(pre==arr[i][0]){
                ans[ans.size()-1].push_back(arr[i][2]);
            }
            else{
                 vector<int>k={arr[i][2]};
                 ans.push_back(k);
                 pre=arr[i][0];
            }
        }
        // for(int i=0;i<ans.size();i++){
        //     sort(ans[i].begin(),ans[i].end());
        // }
        return ans;
    }
};
