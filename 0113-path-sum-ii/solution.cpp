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
class Solution {
public:
    void pushme(vector<vector<int>>& ans,vector<int> curvec,int target,int cursome,TreeNode* root){
        if(root==NULL) return;
        cursome+=root->val;
        curvec.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(cursome==target){
                ans.push_back(curvec);
                return;
            }
        }
        if(root->right) pushme(ans,curvec,target,cursome,root->right);
        if(root->left) pushme(ans,curvec,target,cursome,root->left);
        return ;
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curvec;
        vector<vector<int>> ans;
        pushme(ans,curvec,targetSum,0,root);
        return ans;
    }
};
